using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyNodeComparer : IComparer<GameObject>
{
    private SkellyAI _skellyAI;
    public EnemyNodeComparer(SkellyAI skelly)
    {
        _skellyAI = skelly;
    }

    public int Compare(GameObject x, GameObject y)
    {
        if (x == null || y == null)
            return 0;

        return (int)((Vector3.Distance(_skellyAI.transform.position, x.transform.position) - Vector3.Distance(_skellyAI.transform.position, y.transform.position)) * 100.0f);
    }
}

public class SkellyAI : MonoBehaviour {
    private Player _player;
    bool _active = false;
    [SerializeField]
    private float _speed;
    [SerializeField]
    private float _aggroRange;
    [SerializeField]
    private float _damage;
    [SerializeField]
    private float _attackCooldown;
    private float _currentAttackCooldown = 0;
    private static List<GameObject> _enemyNodes;
    private List<GameObject> _nodeHistory;
    private EnemyNodeComparer _enemyNodeComparer;
    private GameObject _targetNode;

    private void Start()
    {
        _enemyNodeComparer = new EnemyNodeComparer(this);

        // the first Skelly will populate this list for all Skellys to use
        if (_enemyNodes == null)
        {
            _enemyNodes = new List<GameObject>();
            _enemyNodes.AddRange(GameObject.FindGameObjectsWithTag("EnemyNode"));
        }

        _nodeHistory = new List<GameObject>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_player == null)
        {
            _player = FindObjectOfType<Player>();
        }
        else
        {
            float dist = Vector2.Distance(transform.position, _player.transform.position);
            if (_active && dist >= _aggroRange)
            {
                PickNextNode();
            }
            _active = (dist < _aggroRange);

            if (_active)
            {
                transform.position = Vector2.MoveTowards(transform.position, _player.transform.position, _speed * Time.deltaTime);
            }
            else
            {
                if (_targetNode)
                {
                    transform.position = Vector2.MoveTowards(transform.position, _targetNode.transform.position, _speed * Time.deltaTime);

                    if (At(_targetNode))
                        PickNextNode();
                }
                else
                {
                    PickNextNode();
                }
            }
        }

        _currentAttackCooldown -= Time.deltaTime;
    }

    private bool At(GameObject node)
    {
        float dist = Vector3.Distance(node.transform.position, transform.position);
        return dist < 0.1f;
    }

    private void PickNextNode()
    {
        // sort nodes by closest to this skelly
        _enemyNodes.Sort(_enemyNodeComparer);

        // Don't want this getting too long
        if (_nodeHistory.Count >= 2)
            _nodeHistory.Clear();

        // get the next (we haven't been to)
        foreach (GameObject next in _enemyNodes)
        {
            if (!_nodeHistory.Contains(next))
            {
                // set the next target
                _targetNode = next;
                _nodeHistory.Add(next);
                return;
            }
        }

        // been everywhere, reset!
        _nodeHistory.Clear();
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (_currentAttackCooldown <= 0.0f && _player != null && collision.gameObject == _player.gameObject)
        {
            _player.TakeDamage(_damage, transform.position);
            _currentAttackCooldown = _attackCooldown;
        }
    }
}

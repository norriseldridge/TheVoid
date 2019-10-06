using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatAI : MonoBehaviour {
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

    // Update is called once per frame
    void Update () {
		if (_player == null)
        {
            _player = FindObjectOfType<Player>();
        }
        else
        {
            float dist = Vector2.Distance(transform.position, _player.transform.position);
            if (dist < _aggroRange)
            {
                _active = true;
            }

            if (_active)
            {
                transform.position = Vector2.Lerp(transform.position, _player.transform.position, _speed * Time.deltaTime);
            }
        }

        _currentAttackCooldown -= Time.deltaTime;
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

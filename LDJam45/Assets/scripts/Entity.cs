using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EntityState
{
    Idle,
    Walk
}

[System.Serializable]
public struct EntityStateAnimationMapping
{
    public EntityState entityState;
    public string animation;
}

public class Entity : MonoBehaviour {
    public const int ATTACK_UP = 0;
    public const int ATTACK_DOWN = 1;
    public const int ATTACK_LEFT = 2;
    public const int ATTACK_RIGHT = 3;

    /**
     * Audio related
     */
    [SerializeField]
    private AudioSource _hitSound;

    /**
     * Animation / visual related
     */
    [SerializeField]
    protected EntityState _entityState;
    public EntityState EntityState
    {
        get
        {
            return _entityState;
        }

        set
        {
            _entityState = value;
        }
    }

    [SerializeField]
    protected EntityState _fallback = EntityState.Idle;

    [SerializeField]
    protected List<EntityStateAnimationMapping> _entityStateAnimation;
    private Dictionary<EntityState, string> _quickLookup;

    [SerializeField]
    protected Animator _animation;

    [SerializeField]
    protected SpriteRenderer _spriteRenderer;
    protected bool _flipped;

    /**
     * Attack related
     */
    [SerializeField]
    protected Transform[] _attackPositions;
    private float _currentAttackDelay = 0.0f;
    public bool CanAttack
    {
        get
        {
            return _currentAttackDelay <= 0.0f;
        }
    }
    protected int _direction = ATTACK_UP;
    [SerializeField]
    private Weapon _currentWeapon;
    public Weapon CurrentWeapon
    {
        get
        {
            return _currentWeapon;
        }
    }

    /**
     * Health related
     */
    [SerializeField]
    protected float _health;
    public bool Alive
    {
        get
        {
            return _health > 0.0f;
        }
    }
    public void TakeDamage(float damage, Vector3 attackerPosition)
    {
        _hitSound.Play();
        _health -= damage;
        Vector3 attackForce = transform.position - attackerPosition;
        attackForce.Normalize();
        if (GetComponent<Rigidbody2D>())
            GetComponent<Rigidbody2D>().AddForce(attackForce * 350, ForceMode2D.Force);
    }
    protected delegate void OnDie();
    protected OnDie _onDie;

    // Use this for initialization
    protected virtual void Start () {
        _flipped = false;
        _quickLookup = new Dictionary<EntityState, string>();
        foreach (EntityStateAnimationMapping entityStateAnimationMapping in _entityStateAnimation)
        {
            _quickLookup.Add(entityStateAnimationMapping.entityState, entityStateAnimationMapping.animation);
        }
        _entityStateAnimation.Clear();
    }
	
	// Update is called once per frame
	protected virtual void Update () {
        if (_animation != null)
        {
            string ani = _quickLookup.ContainsKey(_entityState) ? _quickLookup[_entityState] : _quickLookup[_fallback];
            _animation.Play(ani);

            _spriteRenderer.flipX = _flipped;
            _currentAttackDelay -= Time.deltaTime;
        }

        transform.position = new Vector3(transform.position.x, transform.position.y, -transform.position.y); // z is based on y

        if (!Alive)
        {
            Die();
        }
    }

    void Die()
    {
        DeathParticle particle = Instantiate(PrefabResource.Instance.deathParticle, transform.position, Quaternion.Euler(0, 0, 0), null);
        particle.Spawn(3);
        Destroy(gameObject);
        if (_onDie != null)
            _onDie();
    }

    protected void ResetAttackTimer()
    {
        if (_currentWeapon != null)
        {
            _currentAttackDelay = _currentWeapon.CooldownTime;
        }
    }

    protected void DoWeaponAttack()
    {
        if (CanAttack)
        {
            ResetAttackTimer();

            // do the positioning of the current weapon!
            if (_currentWeapon != null)
            {
                _currentWeapon.DoAttack(_attackPositions[_direction]);
            }
        }
    }

    public void AddWeapon(Weapon weapon)
    {
        // TODO inventory?
        _currentWeapon = weapon; // for now, just set it
    }
}

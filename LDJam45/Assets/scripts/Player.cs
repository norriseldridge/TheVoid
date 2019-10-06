using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Entity {
    [SerializeField]
    private Rigidbody2D _rigidbody2D;
    [SerializeField]
    private float _speed;
    public Vector2 _movement;
    public bool InputEnabled { get; set; }

    public float HealthPerc
    {
        get
        {
            return _health / 5.0f;
        }
    }

    public void AddHealth(float value)
    {
        _health += value;
        if (_health > 5)
            _health = 5;
    }

    // Use this for initialization
    protected override void Start () {
        base.Start();
        InputEnabled = true;
        _onDie += () =>
        {
            DeadScreen.Instance.Show();
            LevelLoader.Instance.Reset();
        };
    }

    // Update is called once per frame
    protected override void Update () {
        // Handle input and do movement
        DoMovement();

        // Handle trying to do an attack
        DoAttack();

        // Do base behaviour
        base.Update();
    }

    void DoMovement() {
        if (InputEnabled)
        {
            _movement = Vector2.zero;
            if (Input.GetKey(KeyCode.W))
            {
                _movement.y = 1;
                _direction = ATTACK_UP;
            }

            if (Input.GetKey(KeyCode.S))
            {
                _movement.y = -1;
                _direction = ATTACK_DOWN;
            }

            if (Input.GetKey(KeyCode.A))
            {
                _movement.x = -1;
                _flipped = false;
                _direction = ATTACK_LEFT;
            }

            if (Input.GetKey(KeyCode.D))
            {
                _movement.x = 1;
                _flipped = true;
                _direction = ATTACK_RIGHT;
            }
        }

        _movement.Normalize();
        if (_movement.magnitude > 0)
            _entityState = EntityState.Walk;
        else
            _entityState = EntityState.Idle;
        _rigidbody2D.velocity = _movement * _speed * Time.deltaTime;
    }

    void DoAttack()
    {
        if (InputEnabled && Input.GetKey(KeyCode.Space))
        {
            // do the attack with the weapon
            DoWeaponAttack();
        }
    }
}

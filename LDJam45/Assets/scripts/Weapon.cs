using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour {
    private static bool _firstWeapon = true;

    [SerializeField]
    private string _name;

    [SerializeField]
    private float _damage;
    public float Damage
    {
        get
        {
            return _damage;
        }
    }

    [SerializeField]
    private float _cooldownTime;
    public float CooldownTime
    {
        get
        {
            return _cooldownTime;
        }
    }

    [SerializeField]
    private int _attackTime;
    private bool _used = false;

    private Entity _owner = null;
    public Entity Owner
    {
        get
        {
            return _owner;
        }
    }

	public void DoAttack(Transform attackPosition)
    {
        transform.position = attackPosition.position;
        transform.rotation = attackPosition.rotation;
        transform.Rotate(Vector3.forward * 45);
        GetComponent<AudioSource>().Play();
        StartCoroutine(WaitAttackDuration());
    }

    IEnumerator WaitAttackDuration()
    {
        int frames = 10;
        int frameDelay = _attackTime / frames;
        for (int i = 0; i < frames; ++i)
        {
            transform.Rotate(Vector3.back * 90 / frames);
            yield return new WaitForSeconds(frameDelay / 1000.0f);
        }
        transform.position = Vector3.one * 10000; // move it away
        _used = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Entity other = collision.GetComponent<Entity>();
        if (other)
        {
            if (_owner == null)
            {
                _owner = other;
                other.AddWeapon(this);
                transform.position = Vector3.one * 10000; // move it away
                MessagePopup.Instance.ShowMessage("Found a " + _name);

                if (_firstWeapon)
                {
                    MessagePopup.Instance.ShowMessage("Swing with 'space'", 2.0f);
                    _firstWeapon = false;
                }
            }
            else
            {
                // are we getting hit by an "enemy"
                if (_owner != other && _used == false)
                {
                    _used = true;
                    other.TakeDamage(_damage, _owner.transform.position);
                }
            }
        }
    }
}

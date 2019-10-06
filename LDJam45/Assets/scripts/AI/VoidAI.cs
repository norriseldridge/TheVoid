using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoidAI : MonoBehaviour {
    [SerializeField]
    private float _speed;
    private Vector3 _targetPosition;
    private float _distanceToTarget;
    [SerializeField]
    private AudioSource _warnSource;
    [SerializeField]
    private AudioSource _boomSource;
    private bool _isAttacking = false;

    public void JumpTo(Vector3 position)
    {
        _targetPosition = position;
        _distanceToTarget = Vector3.Distance(transform.position, _targetPosition);
        StartCoroutine(Jump());
    }

    IEnumerator Jump()
    {
        Vector3 dir = (transform.position - _targetPosition);
        dir.Normalize();
        while (true)
        {
            transform.position -= dir * _speed * Time.deltaTime;

            float dist = Vector3.Distance(transform.position, _targetPosition);
            float midDist = _distanceToTarget / 2;
            Vector3 scale = Vector3.one * (1 - (Mathf.Abs(midDist - dist) / midDist));
            transform.localScale = (Vector3.one + scale);

            if ((int)System.Math.Abs(dist) == 0)
                break;

            yield return null;
        }

        transform.position = _targetPosition;
        transform.localScale = Vector3.one;
        _boomSource.Play();
        Camera.main.GetComponent<ScreenShake>().Shake(0.5f);
    }

    public void Activate()
    {
        StartCoroutine(DoAttacks());
    }

    IEnumerator DoAttacks()
    {
        while (gameObject)
        {
            // wait for a second before doing a jump
            yield return new WaitForSeconds(2.5f);

            // Jump on player
            _warnSource.Play();
            Vector3 pos = FindObjectOfType<Player>().transform.position;
            yield return new WaitForSeconds(0.65f);
            _isAttacking = true;
            JumpTo(pos);
            yield return new WaitForSeconds(0.2f);
            _isAttacking = false;
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (_isAttacking && collision.gameObject.GetComponent<Player>())
        {
            collision.gameObject.GetComponent<Player>().TakeDamage(2, transform.position);
        }
    }
}

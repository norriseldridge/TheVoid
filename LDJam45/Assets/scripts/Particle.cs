using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Particle : MonoBehaviour {
    [SerializeField]
	private float _life;
    [SerializeField]
    private SpriteRenderer _spriteRenderer;

    private void Start()
    {
        float torque = 300;
        if (Random.value > 0.5f)
        {
            // going right
            GetComponent<Rigidbody2D>().AddTorque(Random.value * -torque);
        }
        else
        {
            // going left
            GetComponent<Rigidbody2D>().AddTorque(Random.value * torque);
            _spriteRenderer.flipX = true;
        }
        transform.localScale = Vector3.zero;
    }

    // Update is called once per frame
    void Update () {
        _life -= Time.deltaTime;
        _spriteRenderer.color = Color.Lerp(_spriteRenderer.color, new Color(0, 0, 0, 0), 1.25f * Time.deltaTime);
        transform.localScale = Vector3.Lerp(transform.localScale, Vector3.one, 2f * Time.deltaTime);

        if (_life <= 0.0f)
        {
            Destroy(gameObject);
        }
	}
}

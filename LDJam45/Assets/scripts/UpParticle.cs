using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpParticle : MonoBehaviour {

    [SerializeField]
    private float _life;

    [SerializeField]
    private float _speed;

    private void Start()
    {
        _speed += Random.value;
    }

    // Update is called once per frame
    void Update () {
        _life -= Time.deltaTime;

        if (_life < 0.0f)
            Destroy(gameObject);

        transform.position += Vector3.up * _speed * Time.deltaTime; 
	}
}

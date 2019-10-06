using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleSpawner : MonoBehaviour {

    [SerializeField]
    private UpParticle _particle;
    private float _delay = 0.0f;
	
	// Update is called once per frame
	void Update () {
		if (_delay < 0.0f)
        {
            UpParticle copy = Instantiate(_particle);
            copy.transform.position = new Vector3(copy.transform.position.x + 1 - (2 * Random.value), -1, 0);
            _delay = 0.5f * Random.value;
        }
        _delay -= Time.deltaTime;
    }
}

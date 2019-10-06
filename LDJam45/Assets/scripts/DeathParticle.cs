using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathParticle : MonoBehaviour {
    [SerializeField]
    private GameObject _particle;

    public void Spawn(int size)
    {
        for (int i = 0; i < size + 1; ++i)
        {
            Instantiate(_particle, transform, false);
        }
        StartCoroutine(DestorySelf());
    }

    // Update is called once per frame
    IEnumerator DestorySelf()
    {
        while (GetComponentsInChildren<Particle>().Length > 0)
            yield return null;
        Destroy(gameObject);
	}
}

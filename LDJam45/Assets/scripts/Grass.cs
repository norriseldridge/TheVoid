using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grass : MonoBehaviour {

    private float _angle;

	// Use this for initialization
	void Start () {
        transform.localScale = Vector3.one * (0.45f + Random.value * 0.5f);
        StartCoroutine(PickNewAngle());
    }
	
	// Update is called once per frame
	void Update () {
        transform.localRotation = Quaternion.Lerp(transform.localRotation, Quaternion.Euler(Vector3.back * _angle), Time.deltaTime);
    }

    IEnumerator PickNewAngle()
    {
        while (gameObject)
        {
            _angle = -12.5f + (Random.value * 25.0f);
            yield return new WaitForSeconds(Random.value * 1.3f);
        }
    }
}

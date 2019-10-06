using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenShake : MonoBehaviour {
    public void Shake(float strength = 1.0f)
    {
        StartCoroutine(DoShake(strength));
    }

    IEnumerator DoShake(float strength)
    {
        Vector3 originalPos = transform.position;
        for (int i = 0; i < 15; ++i)
        {
            transform.position = originalPos + ((Vector3.one * strength * 2) - (Vector3.one * strength * Random.value)) * 0.1f;
            yield return null;
        }
        transform.position = originalPos;
    }
}

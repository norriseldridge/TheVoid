using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour {

    [SerializeField]
    public Transform _toFollow;
    [SerializeField]
    public Vector3 _offset;
    [SerializeField]
    public float _speed;
	
	// Update is called once per frame
	void Update () {
        if (_toFollow != null)
            transform.position = Vector3.MoveTowards(transform.position, _toFollow.position + _offset, _speed * Time.deltaTime);
	}

    public void JumpTo()
    {
        if (_toFollow != null)
            transform.position = _toFollow.position + _offset;
    }
}

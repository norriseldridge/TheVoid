using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealthBar : MonoBehaviour {

    [SerializeField]
    private Image _image;
    private Player _player;

	// Update is called once per frame
	void Update () {
		if (_player == null)
        {
            _player = FindObjectOfType<Player>();
        }
        else
        {
            _image.fillAmount = _player.HealthPerc;
        }
	}
}

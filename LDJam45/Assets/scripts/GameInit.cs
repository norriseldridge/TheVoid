using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameInit : MonoBehaviour {

	// Use this for initialization
	void Start () {
        Application.targetFrameRate = 60; // 60 FPS lock
        SceneManager.LoadScene(1);
	}

}

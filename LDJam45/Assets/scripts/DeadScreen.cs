using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DeadScreen : MonoBehaviour {

    public static DeadScreen Instance
    {
        get
        {
            return FindObjectOfType<DeadScreen>();
        }
    }

    [SerializeField]
    private Text _gameOverText;
    [SerializeField]
    private Text _restartText;
    [SerializeField]
    private Image _backing;
    private bool _acceptInput = false;

    private void Start()
    {
        Hide();
    }

    private void Update()
    {
        if (_acceptInput && Input.anyKeyDown)
        {
            if (FindObjectOfType<Player>() == null)
                SceneManager.LoadScene(1);
        }
    }

    public void Show(string message = "GAME OVER")
    {
        _gameOverText.text = message;
        _gameOverText.gameObject.SetActive(true);
        _restartText.gameObject.SetActive(true);
        StartCoroutine(FadeInBack());
    }

    public void Hide()
    {
        _backing.color = Color.clear;
        _gameOverText.color = Color.clear;
        _restartText.color = Color.clear;
        _acceptInput = false;
    }

    IEnumerator FadeInBack()
    {
        _backing.color = Color.clear;
        int steps = 255 / 2;
        for (int i = 0; i < steps; ++i)
        {
            _backing.color = Color.Lerp(_backing.color, Color.black, 2 * Time.deltaTime);
            _gameOverText.color = Color.Lerp(_gameOverText.color, Color.red, 2 * Time.deltaTime);
            _restartText.color = Color.Lerp(_restartText.color, Color.white, 2 * Time.deltaTime);
            yield return null;
        }
        _backing.color = Color.black;
        _acceptInput = true;
    }
}

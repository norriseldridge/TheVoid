using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IntroSequence : MonoBehaviour {
    [SerializeField]
    private Player _player;
    [SerializeField]
    private GameObject _walkInTarget;
    [SerializeField]
    private GameObject _walkOutTarget;
    [SerializeField]
    private Button _playButton;
    private bool _clickedPlay;
    private float _playButtonY;
    [SerializeField]
    private Text _title;
    [SerializeField]
    private Text _subtitle;
    [SerializeField]
    private Image _health;

    // Use this for initialization
    void Start () {
        MusicManager.Instance.On();
        _clickedPlay = false;
        _playButton.onClick.AddListener(OnClickPlay);
        _playButtonY = _playButton.transform.localPosition.y;
        _playButton.transform.localPosition = new Vector3(0, -1000, 0);
        StartCoroutine(Intro());
    }

    void OnClickPlay()
    {
        _clickedPlay = true;
        _playButton.onClick.RemoveListener(OnClickPlay);
    }

    IEnumerator Intro()
    {
        _health.gameObject.GetComponent<PlayerHealthBar>().enabled = false;
        _health.fillAmount = 0;

        yield return new WaitForSeconds(1.0f);
        yield return StartCoroutine(PlayerWalkUp());
        yield return StartCoroutine(WaitForPlayClick());
        yield return StartCoroutine(PlayerWalkOffscreen());

        _health.gameObject.GetComponent<PlayerHealthBar>().enabled = true;
        Destroy(GameObject.Find("MainMenu"));
    }

    IEnumerator PlayerWalkUp()
    {
        // move player towards destination
        while (_player.transform.position.y < _walkInTarget.transform.position.y)
        {
            _player.InputEnabled = false;
            _player._movement = Vector2.up;
            yield return null;
        }
        _player._movement = Vector2.zero;
    }

    IEnumerator WaitForPlayClick()
    {
        _playButton.transform.localPosition = new Vector3(0, _playButtonY, 0);

        yield return StartCoroutine(FadeInButton());

        while (!_clickedPlay)
            yield return null;

        yield return StartCoroutine(FadeOutButton());
    }

    IEnumerator FadeInButton()
    {
        // fade in
        _playButton.GetComponent<Image>().color = Color.clear;
        _playButton.GetComponentInChildren<Text>().color = Color.clear;
        for (int i = 0; i < 255 / 4; ++i)
        {
            _playButton.GetComponent<Image>().color = Color.Lerp(_playButton.GetComponent<Image>().color, Color.white, 4 * Time.deltaTime);
            _playButton.GetComponentInChildren<Text>().color = Color.Lerp(_playButton.GetComponentInChildren<Text>().color, Color.white, 4 * Time.deltaTime);
            yield return null;
        }
    }

    IEnumerator FadeOutButton()
    {
        // fade out
        for (int i = 0; i < 255 / 4; ++i)
        {
            _playButton.GetComponent<Image>().color = Color.Lerp(_playButton.GetComponent<Image>().color, Color.clear, 4 * Time.deltaTime);
            _playButton.GetComponentInChildren<Text>().color = Color.Lerp(_playButton.GetComponentInChildren<Text>().color, Color.clear, 4 * Time.deltaTime);

            _health.fillAmount = Mathf.Lerp(_health.fillAmount, 2, 4 * Time.deltaTime);

            _title.color = _playButton.GetComponentInChildren<Text>().color;
            _subtitle.color = _title.color;
            yield return null;
        }

        _playButton.GetComponent<Image>().color = Color.clear;
        _playButton.GetComponentInChildren<Text>().color = Color.clear;
    }

    IEnumerator PlayerWalkOffscreen()
    {
        // move player towards destination
        while (_player.transform.position.y < _walkOutTarget.transform.position.y)
        {
            _player.InputEnabled = false;
            _player._movement = Vector2.up;
            yield return null;
        }
        _player._movement = Vector2.zero;
        _player.InputEnabled = true;
        Camera.main.GetComponent<CameraFollow>().enabled = true;
    }
}

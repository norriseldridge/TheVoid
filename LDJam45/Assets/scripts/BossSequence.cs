using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BossSequence : MonoBehaviour {
    private Player _player;
    private bool _enteredTrigger = false;

    [SerializeField]
    private VoidAI _voidAI;

    [SerializeField]
    private Image _blackOverlay;

    [SerializeField]
    private Text _bossText;

    [SerializeField]
    private ParticleSpawner _particleSpawner;

    [SerializeField]
    private AudioSource _bossMusic;

    private void Start()
    {
        _player = FindObjectOfType<Player>();
        _bossText.text = "";
        StartCoroutine(Sequence());
    }

    IEnumerator Sequence()
    {
        // fade out exist music
        if (MusicManager.Instance)
        {
            StartCoroutine(MusicManager.Instance.FadeOut());
        }

        yield return StartCoroutine(FallIn());
        yield return StartCoroutine(WaitForPlayerToEnterTrigger());
        yield return StartCoroutine(EnterBoss());
        yield return StartCoroutine(WaitBossDead());
        yield return StartCoroutine(WinScreen());
    }

    IEnumerator FallIn()
    {
        float introX = 10;

        // Disable Camera follow
        Camera.main.transform.position = new Vector3(introX, 0, -10);
        Camera.main.GetComponent<CameraFollow>().enabled = false;

        // move player from top of screen to center
        _player.transform.position = new Vector3(introX, 1, 0);
        float acceleration = 0;
        while (_player.transform.position.y > 0)
        {
            acceleration += 2 * Time.deltaTime;
            _player.transform.position = _player.transform.position + new Vector3(0, -acceleration * Time.deltaTime, 0);
            yield return null;
        }

        // wait a second
        yield return new WaitForSeconds(1.5f);

        // move player from center of screen to bottom
        acceleration = 0;
        while (_player.transform.position.y > -1)
        {
            acceleration += 2 * Time.deltaTime;
            _player.transform.position = _player.transform.position + new Vector3(0, -acceleration * Time.deltaTime, 0);
            yield return null;
        }

        // fade to black
        yield return StartCoroutine(FadeToBlack());

        // destory particle spawner
        Destroy(_particleSpawner.gameObject);

        // position player
        _player.transform.position = Vector3.zero;
        Camera.main.transform.position = Vector3.up;

        // enable Camera follow
        Camera.main.GetComponent<CameraFollow>().enabled = true;
        yield return StartCoroutine(FadeIn());
    }

    IEnumerator FadeToBlack()
    {
        for (int i = 0; i < 100; ++i)
        {
            _blackOverlay.color = new Color(0, 0, 0, i / 100.0f);
            yield return null;
        }
        _blackOverlay.color = Color.black;
    }

    IEnumerator FadeIn()
    {
        _blackOverlay.color = Color.black;
        for (int i = 0; i < 100; ++i)
        {
            _blackOverlay.color = new Color(0, 0, 0, (100 - i) / 100.0f);
            yield return null;
        }
        _blackOverlay.color = Color.clear;
    }

    IEnumerator WaitForPlayerToEnterTrigger()
    {
        while(!_enteredTrigger)
            yield return null;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<Player>())
            _enteredTrigger = true;
    }

    IEnumerator EnterBoss()
    {
        // disable player input
        _player._movement = Vector2.zero;
        _player.InputEnabled = false;

        // Pull camera back
        float cameraPullBackSpeed = 0.5f;
        Vector3 offset = Vector3.zero;
        while (Camera.main.orthographicSize < 0.9f)
        {
            Camera.main.orthographicSize += cameraPullBackSpeed * Time.deltaTime;
            yield return null;
        }

        // Boss Jump in
        _voidAI.JumpTo(_player.transform.position + Vector3.up * 0.7f);
        yield return new WaitForSeconds(1);
        Camera.main.GetComponent<CameraFollow>()._speed = 1;
        Camera.main.GetComponent<CameraFollow>()._offset = new Vector3(0, 0.32f, -10);

        // Boss text display!
        _bossText.text = "The Void";
        yield return new WaitForSeconds(2f);
        _bossText.text = "";

        // enable player input
        Camera.main.GetComponent<CameraFollow>()._speed = 5;
        Camera.main.GetComponent<CameraFollow>()._offset = new Vector3(0, 0, -10);
        _player.InputEnabled = true;

        // start the fight!
        _voidAI.Activate();
        _bossMusic.Play();
    }

    IEnumerator WaitBossDead()
    {
        while (_voidAI.GetComponent<Entity>().Alive)
            yield return null;
    }

    IEnumerator WinScreen()
    {
        DeadScreen.Instance.Show("YOU WON!");

        yield return new WaitForSeconds(2);

        while (!Input.anyKeyDown)
            yield return null;

        SceneManager.LoadScene(1);
    }
}

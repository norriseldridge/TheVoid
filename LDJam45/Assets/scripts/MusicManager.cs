using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicManager : MonoBehaviour {

    [SerializeField]
    AudioClip[] _musicSequence;

    [SerializeField]
    AudioSource _audioSource;

    public static MusicManager Instance
    {
        get
        {
            return FindObjectOfType<MusicManager>();
        }
    }

    private void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    IEnumerator PlayNext () {
        for (int i = 0; i < _musicSequence.Length; ++i)
        {
            bool isLast = i == _musicSequence.Length - 1;
            _audioSource.loop = isLast; // loop is true on the last clip in the sequence
            _audioSource.clip = _musicSequence[i];
            _audioSource.Play();

            while (!isLast && _audioSource.isPlaying)
                yield return null;
        }
    }

    public IEnumerator FadeOut()
    {
        for (int i = 0; i < 100; i++)
        {
            _audioSource.volume = (100.0f - i) / 100.0f;
            yield return null;
        }
        _audioSource.volume = 0;
    }

    public void On()
    {
        _audioSource.Stop();
        _audioSource.volume = 1;
        _audioSource.Play();
        StartCoroutine(PlayNext());
    }
}

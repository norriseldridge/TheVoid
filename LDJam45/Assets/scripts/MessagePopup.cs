using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Message
{
    public string message;
    public float duration;

    public Message(string m, float d)
    {
        message = m;
        duration = d;
    }
}

public class MessagePopup : MonoBehaviour
{
	public static MessagePopup Instance
    {
        get
		{
            return FindObjectOfType<MessagePopup>();
		}
    }

    [SerializeField]
    private Image _textBacking;

    [SerializeField]
    private Text _message;

    private bool _ready = true;
    private Queue<Message> _messages;
    public void Start()
    {
        _messages = new Queue<Message>();
    }

    public void ShowMessage(string message, float duration = 1.0f)
    {
        _messages.Enqueue(new Message(message, duration));
    }

    void Update()
    {
        if (_messages.Count > 0 && _ready)
        {
            StartCoroutine(ShowNext());
        }
    }

    IEnumerator ShowNext()
    {
        _ready = false;
        _textBacking.color = Color.black; // visible
        Message message = _messages.Dequeue();
        _message.text = message.message;
        yield return new WaitForSeconds(message.duration);

        // show nothing otherwise
        _textBacking.color = Color.clear; // invisible
        _message.text = "";
        _ready = true;
    }
}

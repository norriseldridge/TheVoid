using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public enum DoorDirection
{
    Up,
    Down,
    Left,
    Right
}

public class Door : MonoBehaviour {
    public static DoorDirection Opposite(DoorDirection direction)
    {
        switch (direction)
        {
            case DoorDirection.Up:
                return DoorDirection.Down;

            case DoorDirection.Down:
                return DoorDirection.Up;

            case DoorDirection.Left:
                return DoorDirection.Right;

            case DoorDirection.Right:
                return DoorDirection.Left;
        }

        throw new System.Exception("No opposite found for " + direction);
    }

    [SerializeField]
    private DoorDirection _doorDirection;
    public DoorDirection DoorDirection { get { return _doorDirection; } }
    private bool _prompted = false;
    
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!this.enabled)
            return;

        if (collision.GetComponent<Player>() && !_prompted)
        {
            MessagePopup.Instance.ShowMessage("'E' to enter.");
            _prompted = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (!this.enabled)
            return;

        if (collision.GetComponent<Player>())
        {
            _prompted = false;
        }
    }

    private void Update()
    {
        if (_prompted && Input.GetKeyDown(KeyCode.E))
        {
            // Create a level with door direction
            // TODO not this (should get an instantiate)
            LevelLoader.Instance.LoadLevel(_doorDirection);
        }
    }
}

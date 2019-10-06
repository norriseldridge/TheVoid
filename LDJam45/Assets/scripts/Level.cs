using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
struct DirectionToStartMapping
{
    public DoorDirection doorDirection;
    public GameObject position;
}

public class Level : MonoBehaviour {
    [SerializeField]
    private DirectionToStartMapping[] _startPositions;
    [SerializeField]
    private GameObject[] _itemSpawnLocations;
    public GameObject[] ItemSpawnLocations
    {
        get
        {
            return _itemSpawnLocations;
        }
    }
    private int _lastItemSpawnLocationIndex;

    [SerializeField]
    private GameObject[] _enemySpawnLocations;
    private int _lastEnemySpawnLocationIndex;

    public GameObject GetRandomItemSpawnLocation()
    {
        GameObject temp = null;
        if (_itemSpawnLocations.Length > 0)
        {
            int index = (int)(Random.value * _itemSpawnLocations.Length);
            if (_itemSpawnLocations.Length > 1)
            {
                while (index == _lastItemSpawnLocationIndex)
                    index = (int)(Random.value * _itemSpawnLocations.Length); // don't pick the same place twice
            }
            temp = _itemSpawnLocations[index];
            _lastItemSpawnLocationIndex = index;
        }

        return temp;
    }

    public GameObject GetRandomEnemySpawnLocation()
    {
        GameObject temp = null;
        if (_enemySpawnLocations.Length > 0)
        {
            int index = (int)(Random.value * _enemySpawnLocations.Length);
            if (_enemySpawnLocations.Length > 1)
            {
                while (index == _lastEnemySpawnLocationIndex)
                    index = (int)(Random.value * _enemySpawnLocations.Length); // don't pick the same place twice
            }
            temp = _enemySpawnLocations[index];
            _lastEnemySpawnLocationIndex = index;
        }

        return temp;
    }

    public bool ContainsEntrance(DoorDirection direction)
    {
        foreach (DirectionToStartMapping mapping in _startPositions)
        {
            if (mapping.doorDirection == direction)
                return true;
        }

        return false;
    }

	public void Load(DoorDirection fromDirection) {
        Player player = FindObjectOfType<Player>();

        // do positioning
        foreach (DirectionToStartMapping mapping in _startPositions)
        {
            if (mapping.doorDirection == fromDirection)
            {
                player.transform.position = mapping.position.transform.position;
                Camera.main.GetComponent<CameraFollow>().JumpTo();
                break;
            }
        }

        // disable the door going back
        foreach (Door door in GetComponentsInChildren<Door>())
        {
            if (door.DoorDirection == Door.Opposite(fromDirection))
            {
                door.enabled = false;
                break;
            }
        }
	}
	
}

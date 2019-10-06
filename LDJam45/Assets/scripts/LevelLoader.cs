using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour {

    public static LevelLoader Instance
    {
        get
        {
            return FindObjectOfType<LevelLoader>();
        }
    }

    [SerializeField]
    private Level[] _levels;
    [SerializeField]
    private Level _bossLevel;

    private int _levelsCompleted;

	// Use this for initialization
	void Start () {
        DontDestroyOnLoad(gameObject);
        _levelsCompleted = 0;
    }

    public void Reset()
    {
        _levelsCompleted = 0;
    }

    private void DestoryAllLevels()
    {
        foreach (Level current in FindObjectsOfType<Level>())
        {
            Destroy(current.gameObject);
        }

        // destory any existing weapons (not the player's though)
        foreach (Weapon current in FindObjectsOfType<Weapon>())
        {
            if (current != FindObjectOfType<Player>().CurrentWeapon)
                Destroy(current.gameObject);
        }

        // destory any existing hearts
        foreach (HealthPickup current in FindObjectsOfType<HealthPickup>())
        {
            Destroy(current.gameObject);
        }

        // destory any existing enemies
        foreach (Entity current in FindObjectsOfType<Entity>())
        {
            if (current.gameObject != FindObjectOfType<Player>().gameObject)
                Destroy(current.gameObject);
        }
    }

    public void LoadLevel(DoorDirection doorDirection)
    {
        // destory any existing levels
        DestoryAllLevels();

        // filter down to only levels the apply
        List<Level> pool = new List<Level>();
        foreach (Level temp in _levels)
        {
            if (temp.ContainsEntrance(doorDirection))
                pool.Add(temp);
        }

        // pick a level from the given door direction
        int index = (int)(Random.value * pool.Count);

        // create the next level
        Level level = Instantiate(pool[index]);
        level.Load(doorDirection);

        // custom spawning
        CustomSpawn(level);

        // increment that we are completing levels
        _levelsCompleted++;
    }

    void CustomSpawn(Level level)
    {
        if (_levelsCompleted == 1) // second level spawn a stick
        {
            Spawn(level, PrefabResource.Instance.stick);
        }
        else if (_levelsCompleted >= 2 && _levelsCompleted < 3)
        {
            // spawn bats
            Spawn(level, PrefabResource.Instance.bat);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted >= 3 && _levelsCompleted < 5)
        {
            // spawn skellys
            Spawn(level, PrefabResource.Instance.skelly);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted >= 5 && _levelsCompleted < 7)
        {
            // spawn skellys and bats
            Spawn(level, PrefabResource.Instance.skelly);
            Spawn(level, PrefabResource.Instance.bat);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted == 7)
        {
            // spawn skellys and bats
            Spawn(level, PrefabResource.Instance.skelly);
            Spawn(level, PrefabResource.Instance.bat);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted == 8)
        {
            // spawn skellys and bats
            Spawn(level, PrefabResource.Instance.bat);
            Spawn(level, PrefabResource.Instance.bat);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted == 9)
        {
            // spawn skellys and bats
            Spawn(level, PrefabResource.Instance.skelly);
            Spawn(level, PrefabResource.Instance.bat);
            Spawn(level, PrefabResource.Instance.bat);
            SpawnRandomItem(level);
        }
        else if (_levelsCompleted == 10)
        {
            DestoryAllLevels();
            SceneManager.LoadScene(2, LoadSceneMode.Additive);
        }
    }

    void SpawnRandomItem(Level level)
    {
        if (Random.value > 0.5f)
            Spawn(level, GetRandomWeapon());
        else
            Spawn(level, PrefabResource.Instance.heart);
        if (level.ItemSpawnLocations.Length > 1)
        {
            Spawn(level, GetRandomWeapon()); // if there are several locations, spawn a second
        }
    }

    Weapon GetRandomWeapon()
    {
        int index = (int)(Random.value * 3);
        switch (index)
        {
            case 0:
                return PrefabResource.Instance.stick;

            case 1:
                return PrefabResource.Instance.mace;

            default:
                return PrefabResource.Instance.sword;
        }
    }

    void Spawn(Level level, Weapon item)
    {
        // pick random spawn location
        GameObject location = level.GetRandomItemSpawnLocation();
        if (location != null)
        {
            Instantiate(item, location.transform.position, Quaternion.Euler(Vector3.zero), null);
        }
    }

    void Spawn(Level level, HealthPickup item)
    {
        // pick random spawn location
        GameObject location = level.GetRandomItemSpawnLocation();
        if (location != null)
        {
            Instantiate(item, location.transform.position, Quaternion.Euler(Vector3.zero), null);
        }
    }

    void Spawn(Level level, Entity enemy)
    {
        // pick random spawn location
        GameObject location = level.GetRandomEnemySpawnLocation();
        if (location != null)
        {
            Instantiate(enemy, location.transform.position, Quaternion.Euler(Vector3.zero), null);
        }
    }
}

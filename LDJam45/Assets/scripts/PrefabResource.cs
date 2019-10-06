using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabResource : MonoBehaviour {

    public static PrefabResource Instance
    {
        get
        {
            return FindObjectOfType<PrefabResource>();
        }
    }

    public DeathParticle deathParticle;
    public Weapon stick;
    public Weapon mace;
    public Weapon sword;
    public Entity bat;
    public Entity skelly;
    public HealthPickup heart;

    // Use this for initialization
    void Start () {
        DontDestroyOnLoad(gameObject);
	}
	
}

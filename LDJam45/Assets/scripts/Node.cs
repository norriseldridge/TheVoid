﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour { 
    void Start()
    {
        Destroy(GetComponent<SpriteRenderer>());
    }
}

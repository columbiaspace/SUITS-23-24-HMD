using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabGenerator : MonoBehaviour
{
    public GameObject menu;
    public GameObject SS;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(menu);
        Instantiate(SS);
    }
}

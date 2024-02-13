using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabGenerator : MonoBehaviour
{
    public GameObject menu;
    public GameObject SS;
    public GameObject map;
    GameObject mapInstance;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(menu);
        Instantiate(SS);

    }

    public void openMap()
    {
        mapInstance = Instantiate(map);
    }

    public void closeMap()
    {
        Destroy(mapInstance);
    }
}

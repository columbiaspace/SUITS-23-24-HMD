using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitMap : MonoBehaviour
{
    public GameObject mapPF;
    GameObject mapInstance;
    // Start is called before the first frame update
    public void StartMapPF()
    {
        mapInstance = Instantiate(mapPF);
    }

    public void EndMapPF()
    {
        Destroy(mapInstance);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitMap : MonoBehaviour
{
    public GameObject mapPF;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(mapPF);
    }
    public void StartMapPF()
    {
        mapPF.SetActive(true);
    }

    public void EndMapPF()
    {
        mapPF.SetActive(false);
    }
}

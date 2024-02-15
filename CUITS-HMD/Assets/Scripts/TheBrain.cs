using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TheBrain : MonoBehaviour
{
    public static TheBrain Instance;
    public GameObject menu;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
        Instantiate(menu);
    }
}

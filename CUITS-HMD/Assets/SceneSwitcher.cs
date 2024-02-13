using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneSwitcher : MonoBehaviour
{

    // Add this method to a button click event
    public void SwitchScene(string sceneName)
    {
        SceneManager.LoadSceneAsync(sceneName);
    }
}
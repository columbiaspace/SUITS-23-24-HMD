using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem.Layouts;
using Microsoft.MixedReality.Toolkit;
using static MixedReality.Toolkit.UX.Experimental.NonNativeFunctionKey
using MixedReality.Toolkit.UX.Experimental;
public class ShowKeyboard : MonoBehaviour
{
    private TMP_InputField inputfield;
    
    // Start is called before the first frame update
    void Start()
    {
        inputfield = GetComponent<TMP_InputField>();
        inputfield.onSelect.AddListener();
    }

   public void OpenKeyboard()
    {
        NonNativeKeyboard.Instance.PresentKeyboard(string);
    }
}

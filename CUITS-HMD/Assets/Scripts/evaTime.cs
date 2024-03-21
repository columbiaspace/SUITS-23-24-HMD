using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Unity.Profiling;
using UnityEngine.Serialization;
using UnityEngine.XR.Interaction.Toolkit;
using Newtonsoft.Json;


using TMPro;
using Unity.VisualScripting;
using System;
using System.Xml;

public class evaTime : MonoBehaviour
{
   public TSS_DATA TSS;
   public TMP_Text display; 
    public TMP_Text check;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       if(check.text.Equals("TSS: Connected")){
       display.text = TSS.tel.telemetry.eva_time.ToString(); 
       }
    }
}

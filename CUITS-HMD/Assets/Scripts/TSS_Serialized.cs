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
//using static TSS_Serialized.UIAData;
using System;
using System.Xml;

public class TSS_Serialized : MonoBehaviour
{
    
    // TSSc Connection
    public TSScConnection TSSc;

    // UI Input
    public TMP_InputField InputFieldUrl;

    
    //Status displays
    public TMP_Text status;
    public TMP_Text ip;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
    }

    // On Connect Button Press
    public void Connect_Button()
    {
        // Get URL in Text Field
        string host = InputFieldUrl.text;
        // Print Hostname to Logs
        Debug.Log("Button Pressed: " + host);

        // Connect to TSSc at that Host
        TSSc.ConnectToHost(host, 0);
        if(TSSc.connected == true){
ip.text = "IP: " + host;
status.text = "TSS: Connected";
        }
    }

    public void Disconnect_Button()
    {
        // Disconnects from TSS when
        ip.text = "IP: N/A";
        status.text = "TSS: Not Connected";
        TSSc.DisconnectFromHost();
    }

}

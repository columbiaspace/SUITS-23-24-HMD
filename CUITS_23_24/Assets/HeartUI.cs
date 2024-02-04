using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.UI;
using System.Text.Json;
using System.Text.Json.Nodes;


public class HeartUI : MonoBehaviour
{
    // TSSc Connection
    public TSScConnection TSSc;

    // UI Input
    public TMP_InputField InputFieldUrl;
    public Button ConnectButton;

    // UI Display
    
    public TMP_Text HeartRateText;
   
    public class Telemetry { public int eva_time; }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Check if the TELEMETRY data has been updated
        if (TSSc.isTELEMETRYUpdated())
        {
            Debug.Log("TELEMETRY Updated");

            // Get the Updated TELEMETRY Json
            string TELEMETRYJsonString = TSSc.GetTELEMETRYJsonString();

            // Displays the TELEMETRY data to the screen (Your's should be more complicated)
            HeartRateText.text = TELEMETRYJsonString;
        }
    }
}

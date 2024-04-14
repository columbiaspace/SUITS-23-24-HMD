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

public class vitals_display : MonoBehaviour
{
    public TSS_DATA TSS;
    public TMP_Text display_heart_rate_eva1;
    public TMP_Text display_suit_oxygen_pressure_eva1;
    public TMP_Text display_suit_co2_pressure_eva1;
    public TMP_Text display_suit_other_pressure_eva1;
    public TMP_Text display_suit_total_pressure_eva1;
    public TMP_Text display_scrubber_a_co2_capacity_eva1;
    public TMP_Text display_scrubber_b_co2_capacity_eva1;
    public TMP_Text display_helmet_co2_pressure_eva1;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        display_heart_rate_eva1.text = "Heart rate: {0}", TSS.tel.telemetry.eva1.heart_rate.ToString();
        display_suit_oxygen_pressure_eva1.text = TSS.tel.telemetry.eva1.suit_oxygen_pressure.ToString();
        display_suit_co2_pressure_eva1.text = TSS.tel.telemetry.eva1.suit_co2_pressure.ToString();
        display_suit_other_pressure_eva1.text = TSS.tel.telemetry.eva1.suit_other_pressure.ToString();
        display_suit_total_pressure_eva1.text = TSS.tel.telemetry.eva1.suit_total_pressure.ToString();
        display_scrubber_a_co2_capacity_eva1.text = TSS.tel.telemetry.eva1.scrubber_a_co2_capacity.ToString();
        display_scrubber_b_co2_capacity_eva1.text = TSS.tel.telemetry.eva1.scrubber_b_co2_capacity.ToString();
        display_helmet_co2_pressure_eva1.text = TSS.tel.telemetry.eva1.helmet_co2_pressure.ToString();


    }
}

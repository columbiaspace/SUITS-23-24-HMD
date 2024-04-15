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
    public TMP_Text display_battery_time_left;
    public TMP_Text display_primary_oxygen_storage;
    public TMP_Text display_secondary_oxygen_storage;
    public TMP_Text display_oxygen_time_left;
    public TMP_Text display_oxygen_consumption;
    public TMP_Text display_co2_production;
    public TMP_Text display_suit_oxygen_pressure;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        display_heart_rate_eva1.text = "Heart rate: {"+ TSS.tel.telemetry.eva1.heart_rate.ToString()+"}";
        display_suit_oxygen_pressure_eva1.text = "Suit oxygen pressure: {"+TSS.tel.telemetry.eva1.suit_oxygen_pressure.ToString()+"}";
        display_suit_co2_pressure_eva1.text = "CO2 pressure: {"+TSS.tel.telemetry.eva1.suit_co2_pressure.ToString()+"}";
        display_suit_other_pressure_eva1.text = "Other pressure: {"+TSS.tel.telemetry.eva1.suit_other_pressure.ToString()+"}";
        display_suit_total_pressure_eva1.text = "Total pressure: {"+TSS.tel.telemetry.eva1.suit_total_pressure.ToString()+"}";
        display_scrubber_a_co2_capacity_eva1.text = "Scrubber A CO2 capacity: {"+TSS.tel.telemetry.eva1.scrubber_a_co2_capacity.ToString()+"}";
        display_scrubber_b_co2_capacity_eva1.text = "Scrubber B CO2 capacity: {"+TSS.tel.telemetry.eva1.scrubber_b_co2_capacity.ToString()+"}";
        display_helmet_co2_pressure_eva1.text = "Helmet CO2 pressure: {"+TSS.tel.telemetry.eva1.helmet_co2_pressure.ToString()+"}";
        display_battery_time_left.text = "Battery time left: {"+TSS.tel.telemetry.eva1.battery_time_left.ToString()+"}";
        display_primary_oxygen_storage.text = "Primary oxygen storage: {"+TSS.tel.telemetry.eva1.primary_oxygen_storage.ToString()+"}";
        display_secondary_oxygen_storage.text = "Secondary oxygen storage: {"+TSS.tel.telemetry.eva1.secondary_oxygen_storage.ToString()+"}";
        display_oxygen_time_left.text = "Oxygen time left: {"+TSS.tel.telemetry.eva1.oxygen_time_left.ToString()+"}";
        display_oxygen_consumption.text = "Oxygen consumption: {"+TSS.tel.telemetry.eva1.oxygen_consumption.ToString()+"}";
        display_co2_production.text = "CO2 production: {"+TSS.tel.telemetry.eva1.co2_production.ToString()+"}";
        display_suit_oxygen_pressure.text = "Suit oxygen pressure: {"+TSS.tel.telemetry.eva1.suit_oxygen_pressure.ToString()+"}";



    }
}

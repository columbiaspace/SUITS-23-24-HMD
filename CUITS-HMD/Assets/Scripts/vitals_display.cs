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

    public TMP_Text display_batt_time_left_eva1;
    public TMP_Text display_oxy_pri_storage_eva1;
    public TMP_Text display_oxy_sec_storage_eva1;
    public TMP_Text display_oxy_time_left_eva1;
    public TMP_Text display_heart_rate_eva1;
    public TMP_Text display_oxy_consumption_eva1;
    public TMP_Text display_co2_production_eva1;
    public TMP_Text display_suit_pressure_oxy_eva1;
    public TMP_Text display_suit_pressure_co2_eva1;
    public TMP_Text display_suit_pressure_other_eva1;
    public TMP_Text display_suit_pressure_total_eva1;
    public TMP_Text display_fan_pri_rpm_eva1;
    public TMP_Text display_fan_sec_rpm_eva1;
    public TMP_Text display_helmet_pressure_co2_eva1;
    public TMP_Text display_scrubber_a_co2_storage_eva1;
    public TMP_Text display_scrubber_b_co2_storage_eva1;
    public TMP_Text display_temperature_eva1;
    public TMP_Text display_coolant_ml_eva1;
    public TMP_Text display_coolant_gas_pressure_eva1;
    public TMP_Text display_coolant_liquid_pressure_eva1;



    public TMP_Text display_batt_time_left_eva2;
    public TMP_Text display_oxy_pri_storage_eva2;
    public TMP_Text display_oxy_sec_storage_eva2;
    public TMP_Text display_oxy_time_left_eva2;
    public TMP_Text display_heart_rate_eva2;
    public TMP_Text display_oxy_consumption_eva2;
    public TMP_Text display_co2_production_eva2;
    public TMP_Text display_suit_pressure_oxy_eva2;
    public TMP_Text display_suit_pressure_co2_eva2;
    public TMP_Text display_suit_pressure_other_eva2;
    public TMP_Text display_suit_pressure_total_eva2;
    public TMP_Text display_fan_pri_rpm_eva2;
    public TMP_Text display_fan_sec_rpm_eva2;
    public TMP_Text display_helmet_pressure_co2_eva2;
    public TMP_Text display_scrubber_a_co2_storage_eva2;
    public TMP_Text display_scrubber_b_co2_storage_eva2;
    public TMP_Text display_temperature_eva2;
    public TMP_Text display_coolant_ml_eva2;
    public TMP_Text display_coolant_gas_pressure_eva2;
    public TMP_Text display_coolant_liquid_pressure_eva2;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        display_batt_time_left_eva1.text = "Battery time left: {" + TSS.tel.telemetry.eva1.batt_time_left.ToString() + "}";
        display_oxy_pri_storage_eva1.text = "Primary oxygen storage: {" + TSS.tel.telemetry.eva1.oxy_pri_storage.ToString() + "}";
        display_oxy_sec_storage_eva1.text = "Secondary oxygen storage: {" + TSS.tel.telemetry.eva1.oxy_sec_storage.ToString() + "}";



    }
}

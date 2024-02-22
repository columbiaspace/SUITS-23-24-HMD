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
using static TSS_Serialized.UIAData;
using System;
using System.Xml;

public class TSS_Serialized : MonoBehaviour
{
    public class UIAData
    {
        public UIA uia { get; set; }
        public class UIA
        {
            public bool eva1_power { get; set; }
            public bool eva1_oxy { get; set; }
            public bool eva1_water_supply { get; set; }
            public bool eva1_water_waste { get; set; }
            public bool eva2_power { get; set; }
            public bool eva2_oxy { get; set; }
            public bool eva2_water_supply { get; set; }
            public bool eva2_water_waste { get; set; }
            public bool oxy_vent { get; set; }
            public bool depress { get; set; }
        }
    }

    public class TelemetryData
    {
        public Telemetry telemetry { get; set; }

        public class Telemetry
        {
            public int eva_time { get; set; }
            public EvaData eva1 { get; set; }
            public EvaData eva2 { get; set; }
            public class EvaData
            {
                public double battery_time_left { get; set; }
                public double primary_oxygen_storage { get; set; }
                public double secondary_oxygen_storage { get; set; }
                public double primary_oxygen_pressure { get; set; }
                public double secondary_oxygen_pressure { get; set; }
                public int oxygen_time_left { get; set; }
                public double heart_rate { get; set; }
                public double oxygen_consumption { get; set; }
                public double co2_production { get; set; }
                public double suit_oxygen_pressure { get; set; }
                public double suit_co2_pressure { get; set; }
                public double suit_other_pressure { get; set; }
                public double suit_total_pressure { get; set; }
                public double primary_fan_rpm { get; set; }
                public double secondary_fan_rpm { get; set; }
                public double helmet_co2_pressure { get; set; }
                public double scrubber_a_co2_capacity { get; set; }
                public double scrubber_b_co2_capacity { get; set; }
                public double temperature { get; set; }
                public double coolant_ml { get; set; }
                public double h2o_gas_pressure { get; set; }
                public double h2o_liquid_pressure { get; set; }
            }

        }

    }

    // Represents the "telemetry" object

    // Represents an EVA session ("eva1", "eva2", etc.)

    public class SpecData
    {
        public Spec spec { get; set; }
        public class Spec
        {
            public EvaData eva1 { get; set; }
            public EvaData eva2 { get; set; }
                public class EvaData
                {
                    public string name { get; set; }
                    public int id { get; set; }
                    public ChemicalData data { get; set; }
                    public class ChemicalData
                    {
                        public double SiO2 { get; set; }
                        public double TiO2 { get; set; }
                        public double Al2O3 { get; set; }
                        public double FeO { get; set; }
                        public double MnO { get; set; }
                        public double MgO { get; set; }
                        public double CaO { get; set; }
                        public double K2O { get; set; }
                        public double P2O3 { get; set; }
                    }

                }

            }

    }

    public class RoverData
    {
        public Rover rover { get; set; }
        public class Rover
        {
            public double posx { get; set; }
            public double posy { get; set; }
            public int qr_id { get; set; }
        }
    }

    public class IMUData
    {
        public DCU dcu { get; set; }
        public class DCU
        {
            public EvaData eva1 { get; set; }
            public EvaData eva2 { get; set; }
            public class EvaData
            {
                public double posx { get; set; }
                public double posy { get; set; }
                public double heading { get; set; }
            }
        }
    }

    public class DCUData
    {
        public DCU dcu { get; set; }
        public class DCU
        {
            public EvaData eva1 { get; set; }
            public EvaData eva2 { get; set; }
            public class EvaData
            {
                public bool batt { get; set; }
                public bool oxy { get; set; }
                public bool comm { get; set; }
                public bool fan { get; set; }
                public bool pump { get; set; }
                public bool co2 { get; set; }
            }
        }
    }

    public class  COMMData
    {
        public COMM comm { get; set; }
        public class COMM
        {
            public bool comm_tower { get; set; }
        }
    }

    // TSSc Connection
    public TSScConnection TSSc;

    // UI Input
    public TMP_InputField InputFieldUrl;

    // UI Display
    public TMP_Text UIAJsonDisplay;
    public TMP_Text DCUJsonDisplay;
    public TMP_Text ROVERJsonDisplay;
    public TMP_Text SPECJsonDisplay;
    public TMP_Text TELEMETRYJsonDisplay;
    public TMP_Text COMMJsonDisplay;
    public TMP_Text IMUJsonDisplay;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        // Check if the UIA data has been updated
        if (TSSc.isUIAUpdated())
        {
            Debug.Log("UIA Updated");
            string UIAJsonString = TSSc.GetUIAJsonString();
            var uiaData = JsonConvert.DeserializeObject<UIAData>(UIAJsonString);
            string formatString = "{0,-20} {1,-12}\n";
            string formattedText = string.Format(formatString, "UIA Data:", "");
            formattedText += string.Format(formatString, "EVA1 Power:", uiaData.uia.eva1_power);
            formattedText += string.Format(formatString, "EVA1 Oxy:", uiaData.uia.eva1_oxy);
            formattedText += string.Format(formatString, "EVA1 Water Supply:", uiaData.uia.eva1_water_supply);
            formattedText += string.Format(formatString, "EVA1 Water Waste:", uiaData.uia.eva1_water_waste);
            formattedText += string.Format(formatString, "EVA2 Power:", uiaData.uia.eva2_power);
            formattedText += string.Format(formatString, "EVA2 Oxy:", uiaData.uia.eva2_oxy);
            formattedText += string.Format(formatString, "EVA2 Water Supply:", uiaData.uia.eva2_water_supply);
            formattedText += string.Format(formatString, "EVA2 Water Waste:", uiaData.uia.eva2_water_waste);
            formattedText += string.Format(formatString, "Oxy Vent:", uiaData.uia.oxy_vent);
            formattedText += string.Format(formatString, "Depress:", uiaData.uia.depress);
            UIAJsonDisplay.text = formattedText;

            // Use the deserialized data as needed
            // UIAJsonDisplay.text = eva1Power.ToString();
        }

        // Check if the DCU data has been updated
        if (TSSc.isDCUUpdated())
        {
            Debug.Log("DCU Updated");

            // Get the Updated DCU Json
            string DCUJsonString = TSSc.GetDCUJsonString();
            var dcuData = JsonConvert.DeserializeObject<DCUData>(DCUJsonString);

            //display the dcu data as a nicely formatted string
            string formatString = "{0,-20} {1,-12} {2,-12}\n";
            string formattedText = string.Format(formatString, "DCU Data:", "", "");
            formattedText += string.Format(formatString, "", "EVA1", "EVA2"); // Headers
            formattedText += string.Format(formatString, "Battery:", dcuData.dcu.eva1.batt, dcuData.dcu.eva2.batt);
            formattedText += string.Format(formatString, "Oxygen:", dcuData.dcu.eva1.oxy, dcuData.dcu.eva2.oxy);
            formattedText += string.Format(formatString, "Comm:", dcuData.dcu.eva1.comm, dcuData.dcu.eva2.comm);
            formattedText += string.Format(formatString, "Fan:", dcuData.dcu.eva1.fan, dcuData.dcu.eva2.fan);
            formattedText += string.Format(formatString, "Pump:", dcuData.dcu.eva1.pump, dcuData.dcu.eva2.pump);
            formattedText += string.Format(formatString, "CO2:", dcuData.dcu.eva1.co2, dcuData.dcu.eva2.co2);


            DCUJsonDisplay.text = formattedText;
            // Displays the DCU data to the screen (Your's should be more complicated)
            // DCUJsonDisplay.text = DCUJsonString;
        }

        // Check if the ROVER data has been updated
        if (TSSc.isROVERUpdated())
        {
            Debug.Log("ROVER Updated");

            // Get the Updated ROVER Json
            string ROVERJsonString = TSSc.GetROVERJsonString();

            var roverData = JsonConvert.DeserializeObject<RoverData>(ROVERJsonString);
            double roverPosX = roverData.rover.posx;
            double roverPosY = roverData.rover.posy;
            double roverQR = roverData.rover.qr_id;
            string roverPos = "X: " + roverPosX + " Y: " + roverPosY;
            string roverQRString = "QR ID: " + roverQR;

            ROVERJsonDisplay.text = "Rover Data: \n" + roverPos + "\n" + roverQRString;
            // Displays the ROVER data to the screen (Your's should be more complicated)
            // ROVERJsonDisplay.text = ROVERJsonString;
        }

        // Check if the SPEC data has been updated
        if (TSSc.isSPECUpdated())
        {
            Debug.Log("SPEC Updated");

            // Get the Updated SPEC Json
            string SPECJsonString = TSSc.GetSPECJsonString();

            //Display the spec data as a nicely formatted string
            var specData = JsonConvert.DeserializeObject<SpecData>(SPECJsonString);

            string formatString = "{0,-12} {1,-12} {2,-12}\n";
            string formattedText = string.Format(formatString, "SPEC Data:", "","" );
            formattedText += string.Format(formatString, "EVA1 Name:", specData.spec.eva1.name, ""); 
            formattedText += string.Format(formatString, "EVA2 Name:", specData.spec.eva2.name, "");
            formattedText += string.Format(formatString, "", "EVA1", "EVA2"); // Headers
            formattedText += string.Format(formatString, "ID:", specData.spec.eva1.id, specData.spec.eva2.id);
            formattedText += string.Format(formatString, "SiO2:", specData.spec.eva1.data.SiO2, specData.spec.eva2.data.SiO2);
            formattedText += string.Format(formatString, "TiO2:", specData.spec.eva1.data.TiO2, specData.spec.eva2.data.TiO2);
            formattedText += string.Format(formatString, "Al2O3:", specData.spec.eva1.data.Al2O3, specData.spec.eva2.data.Al2O3);
            formattedText += string.Format(formatString, "FeO:", specData.spec.eva1.data.FeO, specData.spec.eva2.data.FeO);
            formattedText += string.Format(formatString, "MnO:", specData.spec.eva1.data.MnO, specData.spec.eva2.data.MnO);
            formattedText += string.Format(formatString, "MgO:", specData.spec.eva1.data.MgO, specData.spec.eva2.data.MgO);
            formattedText += string.Format(formatString, "CaO:", specData.spec.eva1.data.CaO, specData.spec.eva2.data.CaO);
            formattedText += string.Format(formatString, "K2O:", specData.spec.eva1.data.K2O, specData.spec.eva2.data.K2O);
            formattedText += string.Format(formatString, "P2O3:", specData.spec.eva1.data.P2O3, specData.spec.eva2.data.P2O3);

            SPECJsonDisplay.text = formattedText;
            // SPECJsonDisplay.text = "SPEC Data: \n" + eva1Data + "\n\n" + eva2Data;
            
            // Displays the SPEC data to the screen (Your's should be more complicated)
            // SPECJsonDisplay.text = SPECJsonString;
        }

        // Check if the TELEMETRY data has been updated
        if (TSSc.isTELEMETRYUpdated())
        {
            Debug.Log("TELEMETRY Updated");

            // Get the Updated TELEMETRY Json
            string TELEMETRYJsonString = TSSc.GetTELEMETRYJsonString();

            var telemetryData = JsonConvert.DeserializeObject<TelemetryData>(TELEMETRYJsonString);
            int evaTime = telemetryData.telemetry.eva_time;

            string formatString = "{0,-50} {1,-12:N2} {2,-12:N2}\n"; // Format string for the data

            string formattedText = string.Format("{0,-12} {1,-12}\n", "EVA Time:", evaTime);
            formattedText += string.Format("{0,-50} {1,-12} {2,-12}\n", "", "EVA1", "EVA2"); // Headers
            //Data
            formattedText += string.Format(formatString, "Battery Time Left:", telemetryData.telemetry.eva1.battery_time_left, telemetryData.telemetry.eva2.battery_time_left);
            formattedText += string.Format(formatString, "Primary Oxygen Storage:", telemetryData.telemetry.eva1.primary_oxygen_storage, telemetryData.telemetry.eva2.primary_oxygen_storage);
            formattedText += string.Format(formatString, "Secondary Oxygen Storage:", telemetryData.telemetry.eva1.secondary_oxygen_storage, telemetryData.telemetry.eva2.secondary_oxygen_storage);
            formattedText += string.Format(formatString, "Primary Oxygen Pressure:", telemetryData.telemetry.eva1.primary_oxygen_pressure, telemetryData.telemetry.eva2.primary_oxygen_pressure);
            formattedText += string.Format(formatString, "Secondary Oxygen Pressure:", telemetryData.telemetry.eva1.secondary_oxygen_pressure, telemetryData.telemetry.eva2.secondary_oxygen_pressure);
            formattedText += string.Format(formatString, "Oxygen Time Left:", telemetryData.telemetry.eva1.oxygen_time_left, telemetryData.telemetry.eva2.oxygen_time_left);
            formattedText += string.Format(formatString, "Heart Rate:", telemetryData.telemetry.eva1.heart_rate, telemetryData.telemetry.eva2.heart_rate);
            formattedText += string.Format(formatString, "Oxygen Consumption:", telemetryData.telemetry.eva1.oxygen_consumption, telemetryData.telemetry.eva2.oxygen_consumption);
            formattedText += string.Format(formatString, "CO2 Production:", telemetryData.telemetry.eva1.co2_production, telemetryData.telemetry.eva2.co2_production);
            formattedText += string.Format(formatString, "Suit Oxygen Pressure:", telemetryData.telemetry.eva1.suit_oxygen_pressure, telemetryData.telemetry.eva2.suit_oxygen_pressure);
            formattedText += string.Format(formatString, "Suit CO2 Pressure:", telemetryData.telemetry.eva1.suit_co2_pressure, telemetryData.telemetry.eva2.suit_co2_pressure);
            formattedText += string.Format(formatString, "Suit Other Pressure:", telemetryData.telemetry.eva1.suit_other_pressure, telemetryData.telemetry.eva2.suit_other_pressure);
            formattedText += string.Format(formatString, "Suit Total Pressure:", telemetryData.telemetry.eva1.suit_total_pressure, telemetryData.telemetry.eva2.suit_total_pressure);
            formattedText += string.Format(formatString, "Primary Fan RPM:", telemetryData.telemetry.eva1.primary_fan_rpm, telemetryData.telemetry.eva2.primary_fan_rpm);
            formattedText += string.Format(formatString, "Secondary Fan RPM:", telemetryData.telemetry.eva1.secondary_fan_rpm, telemetryData.telemetry.eva2.secondary_fan_rpm);
            formattedText += string.Format(formatString, "Helmet CO2 Pressure:", telemetryData.telemetry.eva1.helmet_co2_pressure, telemetryData.telemetry.eva2.helmet_co2_pressure);
            formattedText += string.Format(formatString, "Scrubber A CO2 Capacity:", telemetryData.telemetry.eva1.scrubber_a_co2_capacity, telemetryData.telemetry.eva2.scrubber_a_co2_capacity);
            formattedText += string.Format(formatString, "Scrubber B CO2 Capacity:", telemetryData.telemetry.eva1.scrubber_b_co2_capacity, telemetryData.telemetry.eva2.scrubber_b_co2_capacity);
            formattedText += string.Format(formatString, "Temperature:", telemetryData.telemetry.eva1.temperature, telemetryData.telemetry.eva2.temperature);
            formattedText += string.Format(formatString, "Coolant ML:", telemetryData.telemetry.eva1.coolant_ml, telemetryData.telemetry.eva2.coolant_ml);
            formattedText += string.Format(formatString, "H2O Gas Pressure:", telemetryData.telemetry.eva1.h2o_gas_pressure, telemetryData.telemetry.eva2.h2o_gas_pressure);
            formattedText += string.Format(formatString, "H2O Liquid Pressure:", telemetryData.telemetry.eva1.h2o_liquid_pressure, telemetryData.telemetry.eva2.h2o_liquid_pressure);

            TELEMETRYJsonDisplay.text = formattedText;
            // Displays the TELEMETRY data to the screen (Your's should be more complicated)
            // TELEMETRYJsonDisplay.text = TELEMETRYJsonString;
        }

        // Check if the COMM data has been updated
        if (TSSc.isCOMMUpdated())
        {
            Debug.Log("COMM Updated");

            // Get the Updated COMM Json
            string COMMJsonString = TSSc.GetCOMMJsonString();
            var commData = JsonConvert.DeserializeObject<COMMData>(COMMJsonString);
            bool commTower = commData.comm.comm_tower;
            COMMJsonDisplay.text = "Comm Tower: " + commTower;

            // Displays the COMM data to the screen (Your's should be more complicated)
            // COMMJsonDisplay.text = COMMJsonString;
        }

        // don't know why this isn't displaying properly --\_(-_-)_/--
        if (TSSc.isIMUUpdated())
        {
            Debug.Log("IMU Updated");

            // Get the Updated IMU Json
            string IMUJsonString = TSSc.GetIMUJsonString();
            var imuData = JsonConvert.DeserializeObject<IMUData>(IMUJsonString);

            string formatString = "{0,-12} {1,-12:N3} {1,-12:N3}\n";
            string formattedText = string.Format(formatString, "IMU Data:", "");
            formattedText += string.Format(formatString, "", "EVA1", "EVA2");
            formattedText += string.Format(formatString, "X:", imuData.dcu.eva1.posx, imuData.dcu.eva2.posx);
            formattedText += string.Format(formatString, "Y:", imuData.dcu.eva1.posy, imuData.dcu.eva2.posy);
            formattedText += string.Format(formatString, "Heading:", imuData.dcu.eva1.heading, imuData.dcu.eva2.heading);
            
            IMUJsonDisplay.text = formattedText;
            // Displays the IMU data to the screen (Your's should be more complicated)
            // IMUJsonDisplay.text = IMUJsonString;
        }
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
    }

    public void Disconnect_Button()
    {
        // Disconnects from TSS when
        TSSc.DisconnectFromHost();
    }

}

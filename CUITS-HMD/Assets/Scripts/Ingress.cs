using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Linq;

public class Ingress : MonoBehaviour
{
    // Game objects representing UIA and DCU controls
    public GameObject EMU_POWER;
    public GameObject DCU_BATT;
    public GameObject O2_VENT;
    public GameObject PUMP;
    public GameObject WASTE_WATER;

    public TMP_Text text;

    Dictionary<int, Dictionary<int, bool>> steps = new Dictionary<int, Dictionary<int, bool>>();
    Dictionary<int, bool> step1 = new Dictionary<int, bool>();
    Dictionary<int, bool> step2 = new Dictionary<int, bool>();
    Dictionary<int, bool> step3 = new Dictionary<int, bool>();
    Dictionary<int, bool> step4 = new Dictionary<int, bool>();

    void Start()
    {
        InitializeSteps();
    }

    void Update()
    {
        ExecuteSteps();
    }

    void InitializeSteps()
    {
        // Step 1
        for (int i = 1; i <= 3; i++)
        {
            step1.Add(i, false);
        }
        steps.Add(1, step1);

        // Step 2
        for (int i = 1; i <= 3; i++)
        {
            step2.Add(i, false);
        }
        steps.Add(2, step2);

        // Step 3
        for (int i = 1; i <= 4; i++)
        {
            step3.Add(i, false);
        }
        steps.Add(3, step3);

        // Step 4
        for (int i = 1; i <= 2; i++)
        {
            step4.Add(i, false);
        }
        steps.Add(4, step4);
    }

    void ExecuteSteps()
    {
        // Step 1: Connect UIA to DCU and start Depress
        if (!steps[1].All(x => x.Value == true))
        {
            // UIA and DCU 1. EV1 and EV2 connect UIA and DCU umbilical
            if (!steps[1][1])
            {
                // Perform actions to connect UIA and DCU umbilical
                steps[1][1] = true;
            }

            // UIA 2. EV-1, EV-2 EMU PWR – ON
            if (!steps[1][2])
            {
                // Activate EMU power
                EMU_POWER.SetActive(true);
                steps[1][2] = true;
            }

            // BOTH DCU 3. BATT – UMB
            if (!steps[1][3])
            {
                // Update DCU battery state
                DCU_BATT.SetActive(true);
                steps[1][3] = true;
            }
        }

        // Step 2: Vent O2 Tanks
        if (!steps[2].All(x => x.Value == true))
        {
            // UIA 1. OXYGEN O2 VENT – OPEN
            if (!steps[2][1])
            {
                // Open O2 vent
                O2_VENT.SetActive(true);
                steps[2][1] = true;
            }

            // HMD 2. Wait until both Primary and Secondary OXY tanks are < 10psi
            // Implementation depends on available telemetry data

            // UIA 3. OXYGEN O2 VENT – CLOSE
            if (!steps[2][3])
            {
                // Close O2 vent
                O2_VENT.SetActive(false);
                steps[2][3] = true;
            }
        }

        // Step 3: Empty Water Tanks
        if (!steps[3].All(x => x.Value == true))
        {
            // BOTH DCU 1. PUMP – OPEN
            if (!steps[3][1])
            {
                // Open pump
                PUMP.SetActive(true);
                steps[3][1] = true;
            }

            // UIA 2. EV-1, EV-2 WASTE WATER – OPEN
            if (!steps[3][2])
            {
                // Open waste water valve
                WASTE_WATER.SetActive(true);
                steps[3][2] = true;
            }

            // HMD 3. Wait until water EV1 and EV2 Coolant tank is < 5%
            // Implementation depends on available telemetry data

            // UIA 4. EV-1, EV-2 WASTE WATER – CLOSE
            if (!steps[3][4])
            {
                // Close waste water valve
                WASTE_WATER.SetActive(false);
                steps[3][4] = true;
            }
        }

        // Step 4: Disconnect UIA from DCU
        if (!steps[4].All(x => x.Value == true))
        {
            // UIA 1. EV-1, EV-2 EMU PWR – OFF
            if (!steps[4][1])
            {
                // Deactivate EMU power
                EMU_POWER.SetActive(false);
                steps[4][1] = true;
            }

            // DCU 2. EV1 and EV2 disconnect umbilical
            // Implementation depends on available system control
        }
    }
}

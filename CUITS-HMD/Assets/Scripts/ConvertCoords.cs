using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConvertCoords : MonoBehaviour
{
    public GameObject pin;
    public TSS_DATA TSS;

    double uniposx;
    double uniposy;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        uniposx = TSS.imu.dcu.eva1.posx - 298354.99707 + (.0030824 * (TSS.imu.dcu.eva1.posx - 298355));
        uniposy = TSS.imu.dcu.eva1.posy - 3272382.95751 + (.0026632407 * (TSS.imu.dcu.eva1.posy - 3272383));

        pin.transform.position = new Vector3((float)uniposx, (float)uniposy, 0);
    }

}

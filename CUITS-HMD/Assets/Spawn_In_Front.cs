using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn_In_Front : MonoBehaviour
{
    public Transform Camera;
    public Transform thingy;
 
    // Start is called before the first frame update
    public void reset()
    {
Vector3 p;
float y = 1.5f;
float z = 0.5f;
p.x = Camera.position.x;        
p.y = Camera.position.y + y;
p.z = Camera.position.z + z;
    thingy.position = p;
    }

}

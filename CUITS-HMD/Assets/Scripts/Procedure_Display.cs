using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Procedure_Display : MonoBehaviour
{
    public LMCC_CONNECT lmcc;
    
    public TMP_Text Title;
    public TMP_Text Body;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       Title.text = lmcc.GoldenProcedure.title;

        Body.text = "";
        foreach (var thing in lmcc.GoldenProcedure.steps) {
            Body.text += thing.step;
            Body.text += " (";
            Body.text += thing.role;
            Body.text += "): ";
            Body.text += thing.description;
            Body.text +=  "\n\n";

        }

    }
}

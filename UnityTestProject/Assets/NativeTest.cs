using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using Procedural2DGenerator;

public class NativeTest : MonoBehaviour
{



    private void Start()
    {

        var a = Procedural2DHelper.CreateArea(30, 30, 0, 0);
        a = Procedural2DHelper.GenerateRandomNoiseInArea(a);

        for (int i = 0; i< a.tileInfo.GetLength(0); i++)
        {
            for (int j = 0; j< a.tileInfo.GetLength(1); j++)
            {
                Debug.Log(a.tileInfo[i,j]); 
            }
        }
       


    }


    void Update()
    {

    }
}


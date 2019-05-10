using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityPluginTestUnsecure;
using Procedural2DGenerator; 

public class NativeTest : MonoBehaviour
{



     private void Start()
    {

        var a = Procedural2DHelper.CreateArea(30, 30, 0, 0); 

        //Probar DLL intermedia de C# unsafe de la vida para ver si no tengo que hacer unsafe esto xd
        TestTest t = new TestTest();

        var x = t.Start(); 
        for (int i = 0; i<x.GetLength(0); i++)
        {
            for (int j = 0; j < x.GetLength(1); j++)
            {
                Debug.Log(x[i,j]); 
            }
            
        }
    
       
    }


    void Update()
    {
        
    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using Procedural2DGenerator;
using System.Diagnostics;



public class NativeTest : MonoBehaviour
{

    [SerializeField]
    private GameObject squarePrefab; 

    private void Start()
    {


        
        var watch = Stopwatch.StartNew();
        // something to time

        //var a = Procedural2DHelper.CreateArea(100, 100, 0, 0);
        // a = Procedural2DHelper.GenerateDrunkardWalkInArea(a);
        //for (int i = 0; i < 1; i++)
        //{
        //   var a = Procedural2DHelper.CreateBSPDungeonArea(1000, 1000, 0, 0);
        //}
        watch.Stop();

        UnityEngine.Debug.Log("TIME C++: " + watch.ElapsedMilliseconds);
        
    

        watch.Reset();
        
        //watch.Start();


        //for (int i = 0; i < 10; i++)
        //{
        //    var b = GenerateAreaDrunkardWalk();
        //}


        //watch.Stop(); 


        UnityEngine.Debug.Log("TIME C#: " + watch.ElapsedMilliseconds);

        // var map = Procedural2DHelper.CreateBSPDungeonArea(100, 100, 0, 0,4,10);

        watch.Reset(); 
        watch.Start(); 
        var map = Procedural2DHelper.CreateDrunkardWalkArea(1000, 1000, 0, 0, 1000000);
        watch.Stop();
        UnityEngine.Debug.Log("Hola buenas tardes: " + watch.ElapsedMilliseconds);

        watch.Reset();
        watch.Start(); 
        MapDrawer.DrawMapWithTileMap(map);
        watch.Stop();
        UnityEngine.Debug.Log("TIME TILE: " + watch.ElapsedMilliseconds); 
        watch.Reset();
        //watch.Start(); 
        //MapDrawer.DrawMap(squarePrefab, map);
        //watch.Stop();
        //UnityEngine.Debug.Log("TIME Prefab: " + watch.ElapsedMilliseconds);



    }


    private Area GenerateAreaDrunkardWalk(int iterations = 100000)
    {
        Area area = new Area();
        area.tileInfo = new int[1000, 1000];
        area.x = 0;
        area.y = 0;

        int x = 500;
        int y = 500; 
        for (int i = 0; i< area.tileInfo.GetLength(0); i++)
        {
            for (int j = 0; j< area.tileInfo.GetLength(1); j++)
            {
                float r = Random.Range(0, 1); 
                if (r < 0.25f)
                {
                    y++;
                    y = y >= area.tileInfo.GetLength(1) ? area.tileInfo.GetLength(1) - 1 : y; 
                }
                else if (r < 0.5f)
                {
                    x++;
                    x = x >= area.tileInfo.GetLength(0) ? area.tileInfo.GetLength(0) - 1 : x; 
                }
                else if (r < 0.75f)
                {
                    y--;
                    y = y < 0 ? 0 : y; 
                }
                else
                {
                    x--;
                    x = x < 0 ? 0 : x; 
                }

                area.tileInfo[x, y] = 1; 
            }
        }

        return area; 
    }


    void Update()
    {

    }
}


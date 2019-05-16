using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Procedural2DGenerator; 


public static class MapDrawer 
{
   public static void DrawMap(GameObject prefab, Area area)
    {

        int x = area.x;
        int y = area.y; 
        for (int i = 0; i< area.tileInfo.GetLength(0); i++)
        {
            for (int j = 0; j< area.tileInfo.GetLength(1); j++)
            {
                if (area.tileInfo[i, j] == 0)
                {
                    MonoBehaviour.Instantiate(prefab, new Vector2(x, y), Quaternion.identity);
                }
                y++; 
            }
            y = area.y;
            x++; 
        }
    }

}

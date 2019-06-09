using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps; 
using Procedural2DGenerator; 

public enum MapType
{
    Drunkard,
    BSPDungeon,
    RandomNoise,
    SimpleDungeon
}
public static class MapDrawer 
{

    public static void ClearTileMap()
    {
        var map = GameObject.FindObjectOfType<Tilemap>();
        if (map == null)
        {
            GameObject go = new GameObject();
            go.AddComponent<Grid>();
            go.name = "Grid";
            GameObject child = new GameObject();
            child.transform.parent = go.transform;
            map = child.AddComponent<Tilemap>();
            child.AddComponent<TilemapRenderer>();
            child.name = "tilemap";
        }

        map.ClearAllTiles(); 

    }

    public static void DrawMapWithTileMap(Area area)
    {
        var map = GameObject.FindObjectOfType<Tilemap>(); 
        if (map == null)
        {
            GameObject go = new GameObject();
            go.AddComponent<Grid>();
            go.name = "Grid"; 
            GameObject child = new GameObject();
            child.transform.parent = go.transform;
            map = child.AddComponent<Tilemap>();
            child.AddComponent<TilemapRenderer>(); 
            child.name = "tilemap";
        }

        
      
        ProceduralDataObject defaultData = Resources.Load<ProceduralDataObject>("data");
                
        if (defaultData.autoClearTileMap)
        {
            map.ClearAllTiles(); 
        }

        int x = area.x;
        int y = area.y;
        for (int i = 0; i < area.tileInfo.GetLength(0); i++)
        {
            for (int j = 0; j < area.tileInfo.GetLength(1); j++)
            {
                if (area.tileInfo[i, j] == 0)
                {
                    map.SetTile(new Vector3Int(i,j,0), defaultData.defaultCollisionTile); 
                }
                else
                {
                    map.SetTile(new Vector3Int(i, j, 0),defaultData.defaultFreeTile); 
                }
                y++;
            }
            y = area.y;
            x++;
        }

    }

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

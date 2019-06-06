using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps; 


[CreateAssetMenu(fileName = "ProceduralData", menuName ="Procedural2DGenerator++/Data", order = 0)]
public class ProceduralDataObject : ScriptableObject
{
    public Tile defaultCollisionTile;
    public Tile defaultFreeTile;
    public bool autoClearTileMap; 
}

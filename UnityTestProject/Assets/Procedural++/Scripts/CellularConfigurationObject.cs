using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Procedural2DGenerator; 

[CreateAssetMenu(fileName = "CellularConfiguration", menuName = "Procedural2DGenerator++/CellularConfiguration", order = 1)]
public class CellularConfigurationObject : ScriptableObject
{
    public List<Procedural2DHelper.CellularProbability> probabilities;
    public int iterations = 4;
    public int numberOfTIles = 2; 



}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Procedural2DGenerator
{


    [System.Serializable]
    public struct Area
    {

        public int x, y;
        public int[,] tileInfo;
        public Area[] areas;

    }
    public class Procedural2DHelper
    {
        [StructLayout(LayoutKind.Sequential)]
        unsafe private struct AreaUnsafe
        {
            public int x, y;
            public int** tileInfo;
            public int width;
            public int height;
            public AreaUnsafe** areas;
            public int areasCount;
        }
        [StructLayout(LayoutKind.Sequential)]
        public struct CellularProbability
        {
            public int neighbourTile;
            public int minNumberOfTilesToTransform;
            public int maxNumberOfTilesToTransform;
            public int tileToTransform;
        };

        #region DLL imports from C++
        //Miscellaneous imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "destroyArea")]
        private unsafe static extern void DestroyAreaUnsafe(AreaUnsafe* area);
        [DllImport("Procedural2DGenerator++", EntryPoint = "createEmptyArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeArea(int width, int height, int x, int y);


        //Random Noise imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "createRandomNoiseArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeRandomArea(int width, int height, int x, int y);
        [DllImport("Procedural2DGenerator++", EntryPoint = "generateRandomNoiseInArea")]
        private unsafe static extern void GenerateRandomAreaInUnsafe(AreaUnsafe* area);


        //Drunkard Walk imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "generateDrunkardWalkInArea")]
        private unsafe static extern void GenerateDrunkardWalkAreaUnsafe(AreaUnsafe* area, int iterations = 10000);

        [DllImport("Procedural2DGenerator++", EntryPoint = "createDrunkardWalkArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeDrunkardArea(int width, int height, int x, int y, int iterations = 10000);


        //BSP Dungeon imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "createBSPDungeonArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeBSPDungeonArea(int width, int height, int x, int y, int minRooms, int maxRooms, int minWidth, int minHeight);

        [DllImport("Procedural2DGenerator++", EntryPoint = "generateBSPDungeonInArea")]
        private unsafe static extern void GenerateBSPDungeonAreaUnsafe(AreaUnsafe* area, int minRooms, int maxRooms, int minWidth, int minHeight);


        //Simple Dungeon imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "createSimpleDungeonArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeSimpleDungeonArea(int width, int height, int x, int y, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100);

        [DllImport("Procedural2DGenerator++", EntryPoint = "generateSimpleDungeonInArea")]
        private unsafe static extern void GenerateSimpleDungeonAreaUnsafe(AreaUnsafe* area, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100);

        //Cellular imports
        [DllImport("Procedural2DGenerator++", EntryPoint = "createCellularAutomataArea")]
        private unsafe static extern AreaUnsafe* CreateUnsafeCellularAutomataArea(int width, int height, int x, int y, int iterations = 3, int numberOfTiles = 2);
        [DllImport("Procedural2DGenerator++", EntryPoint = "generateCellularAutomataInArea")]
        private unsafe static extern void GenerateCellularAutomataAreaUnsafe(AreaUnsafe* area, int iterations = 3, int numberOfTiles = 2);
        [DllImport("Procedural2DGenerator++", EntryPoint = "addCellularProbability")]
        private unsafe static extern void AddCellularProbability(CellularProbability prob);

        #endregion

        #region Area creation and conversion between unsafe and safe areas
        public unsafe static Area CreateArea(int width, int height, int x, int y)
        {
            AreaUnsafe* uArea = CreateUnsafeArea(width, height, x, y);

            return ConvertUnsafeToSafe(uArea);
        }

        private unsafe static Area ConvertUnsafeToSafe(AreaUnsafe* uArea)
        {
            Area area = new Area();

            area.x = uArea->x;
            area.y = uArea->y;
            area.tileInfo = new int[uArea->width, uArea->height];
            for (int i = 0; i < uArea->width; i++)
            {
                for (int j = 0; j < uArea->height; j++)
                {
                    area.tileInfo[i, j] = uArea->tileInfo[i][j];
                }
            }


            area.areas = new Area[uArea->areasCount];

            for (int i = 0; i < uArea->areasCount; i++)
            {
                area.areas[i] = ConvertUnsafeToSafe((uArea->areas[i]));
            }


            return area;
        }

        private unsafe static AreaUnsafe* ConvertSafeToUnsafe(Area area) //TODO, need a constructor that initialices some empty children areas.
        {
            AreaUnsafe* uArea = CreateUnsafeArea(area.tileInfo.GetLength(0), area.tileInfo.GetLength(1), area.x, area.y);
            for (int i = 0; i < uArea->width; i++)
            {
                for (int j = 0; j < uArea->height; j++)
                {
                    uArea->tileInfo[i][j] = area.tileInfo[i, j];
                }
            }
            return uArea;
        }

        #endregion

        #region Algorithm C# interface

        public unsafe static Area CreateRandomNoiseArea(int width, int height, int x, int y)
        {
            AreaUnsafe* areaUnsafe = CreateUnsafeRandomArea(width, height, x, y);
            Area area = ConvertUnsafeToSafe(areaUnsafe);
            DestroyAreaUnsafe(areaUnsafe);
            return area;
        }

        public unsafe static Area GenerateRandomNoiseInArea(Area area)
        {
            AreaUnsafe* unsafeArea = ConvertSafeToUnsafe(area);
            GenerateRandomAreaInUnsafe(unsafeArea);
            Area areaReturn = ConvertUnsafeToSafe(unsafeArea);
            DestroyAreaUnsafe(unsafeArea);
            return areaReturn;
        }

        public unsafe static Area CreateDrunkardWalkArea(int width, int height, int x = 0, int y = 0, int iterations = 10000)
        {
            AreaUnsafe* areaUnsafe = CreateUnsafeDrunkardArea(width, height, x, y, iterations);
            Area area = ConvertUnsafeToSafe(areaUnsafe);
            DestroyAreaUnsafe(areaUnsafe);
            return area;
        }

        public unsafe static Area GenerateDrunkardWalkInArea(Area area)
        {
            AreaUnsafe* unsafeArea = ConvertSafeToUnsafe(area);
            GenerateDrunkardWalkAreaUnsafe(unsafeArea);
            Area areaReturn = ConvertUnsafeToSafe(unsafeArea);
            DestroyAreaUnsafe(unsafeArea);
            return areaReturn;
        }

        public unsafe static Area CreateBSPDungeonArea(int width, int height, int x = 0, int y = 0, int minRooms = 10, int maxRooms = 100, int minWidth = 1, int minHeight = 1)
        {

            AreaUnsafe* areaUnsafe = CreateUnsafeBSPDungeonArea(width, height, x, y, minRooms, maxRooms, minWidth, minHeight);
            Area area = ConvertUnsafeToSafe(areaUnsafe);
            DestroyAreaUnsafe(areaUnsafe);
            return area;
        }

        public unsafe static Area GenerateBSPDungeonInArea(Area area, int minRooms = 10, int maxRooms = 100, int minWidth = 1, int minHeight = 1)
        {
            AreaUnsafe* unsafeArea = ConvertSafeToUnsafe(area);
            GenerateBSPDungeonAreaUnsafe(unsafeArea, minRooms, maxRooms, minWidth, minHeight);
            Area areaReturn = ConvertUnsafeToSafe(unsafeArea);
            DestroyAreaUnsafe(unsafeArea);
            return areaReturn;
        }
        public unsafe static Area CreateSimpleDungeonArea(int width, int height, int x = 0, int y = 0, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100)
        {

            AreaUnsafe* areaUnsafe = CreateUnsafeSimpleDungeonArea(width, height, x, y, tries, extraCorridors, minWidth, maxWidth, minHeight, maxHeight);
            Area area = ConvertUnsafeToSafe(areaUnsafe);
            DestroyAreaUnsafe(areaUnsafe);
            return area;
        }

        public unsafe static Area GenerateSimpleDungeonInArea(Area area, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100)
        {
            AreaUnsafe* unsafeArea = ConvertSafeToUnsafe(area);
            GenerateSimpleDungeonAreaUnsafe(unsafeArea, tries, extraCorridors, minWidth, maxWidth, minHeight, maxHeight);
            Area areaReturn = ConvertUnsafeToSafe(unsafeArea);
            DestroyAreaUnsafe(unsafeArea);
            return areaReturn;
        }

        public unsafe static Area CreateCellularAutomataArea(int width, int height, CellularProbability[] probs, int x = 0, int y = 0, int iterations = 3, int numberOfTiles = 2)
        {
            for (int i = 0; i < probs.Length; i++)
            {
                AddCellularProbability(probs[i]);
            }
            AreaUnsafe* areaUnsafe = CreateUnsafeCellularAutomataArea(width, height, x, y, iterations, numberOfTiles);
            Area area = ConvertUnsafeToSafe(areaUnsafe);
            DestroyAreaUnsafe(areaUnsafe);
            return area;
        }

        public unsafe static Area GenerateCellularAutomataInArea(Area area, CellularProbability[] probs, int iterations = 3, int numberOfTiles = 2)
        {
            for (int i = 0; i < probs.Length; i++)
            {
                AddCellularProbability(probs[i]);
            }
            AreaUnsafe* unsafeArea = ConvertSafeToUnsafe(area);
            GenerateCellularAutomataAreaUnsafe(unsafeArea, iterations, numberOfTiles);
            Area areaReturn = ConvertUnsafeToSafe(unsafeArea);
            DestroyAreaUnsafe(unsafeArea);
            return areaReturn;
        }

        #endregion
    }




}

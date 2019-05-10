using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Procedural2DGenerator
{



    public class Procedural2DHelper
    {
        unsafe private class AreaUnsafe
        {
            public int x, y;
            public int** tileInfo;
            public int width;
            public int height;
            public AreaUnsafe[] areas;
            public int areasCount;
        }
        

        [DllImport("Procedural2DGenerator++", EntryPoint = "createEmptySharpArea")]
       private static extern AreaUnsafe CreateUnsafeArea(int width, int height, int x, int y); 
        
        public static Area CreateArea(int width, int height, int x, int y)
        {
            AreaUnsafe uArea = CreateUnsafeArea(width, height, x, y);
            return ConvertUnsafeToSafe(uArea); 
        }

        private unsafe static Area ConvertUnsafeToSafe(AreaUnsafe uArea)
        {
            Area area = new Area();

            area.x = uArea.x;
            area.y = uArea.y;
            area.tileInfo = new int[uArea.width, uArea.height]; 
            for (int i = 0; i< uArea.width; i++)
            {
                for (int j = 0; j< uArea.height; j++)
                {
                    area.tileInfo[i, j] = uArea.tileInfo[i][j]; 
                }
            }

            area.areas = new Area[uArea.areasCount]; 
            for (int i = 0; i< uArea.areasCount; i++)
            {
                area.areas[i] = ConvertUnsafeToSafe(uArea.areas[i]); 
            }

            return area; 
        }


    }

    public struct Area
    {
        
        public int x, y;
        public int[,] tileInfo;
        public Area[] areas; 
        
    }
   
}

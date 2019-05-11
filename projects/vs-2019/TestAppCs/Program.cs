using System;
using Procedural2DGenerator; 
namespace TestAppCs
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Area area = Procedural2DHelper.CreateArea(30, 30, 2, 2); 
        }
    }
}

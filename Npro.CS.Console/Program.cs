using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace Npro.CS.Console
{
    class Program
    {
        [DllImport("NPro.CppDll.Dll.dll")]
        public static extern int GetFrameBorderWidth();
        [DllImport("NPro.CppDll.Dll.dll")]
        public static extern int GetFrameBorderHeight();
        [DllImport("NPro.CppDll.Dll.dll")]
        public static extern int GetTitleBarHeight();

        static void Main(string[] args)
        {

            System.Console.WriteLine(GetFrameBorderWidth());
            System.Console.WriteLine(GetFrameBorderHeight());
            System.Console.WriteLine(GetTitleBarHeight());

        }
    }
}

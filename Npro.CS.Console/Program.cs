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
        // double を受け取る関数を用意した
        [DllImport("NPro.CppDll.Dll.dll")]
        public static extern double GetDoubleValue();
        // 文字列を受け取る
        [DllImport("NPro.CppDll.Dll.dll")]
        [return: MarshalAs(UnmanagedType.BStr)]
        public static extern string GetName();

        static void Main(string[] args)
        {

            System.Console.WriteLine(GetFrameBorderWidth());
            System.Console.WriteLine(GetFrameBorderHeight());
            System.Console.WriteLine(GetTitleBarHeight());
            // double を呼び出し
            System.Console.WriteLine(GetDoubleValue());
            // 文字列 を呼び出し
            System.Console.WriteLine(GetName());

        }
    }
}

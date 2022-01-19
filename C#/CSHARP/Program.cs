using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//name space
namespace CSHARP
{
    //class
    internal class Program
    {
        //function
        static void Main(string[] args)
        {
            int variable = 0;       //variable
            /* unsigned integer:
             * byte (8),    ushort (16),    uint (32, u),    ulong (64, ul)
             * signed integer:
             * sbyte (8),   short (16),     int (32),    long (64, l)
             * floating point:
             * float (32, f),  double (64, d)
             * decimal (128, m)
             * letter:
             * char (16, ''),   string (16 per character, "")
             * bool (8, true or false)
             * class
             * interface
             * delegate
             * array
             */
            test();
            Console.ReadLine();
        }
        static void test()
        {
            float x = 1f / 3f;
            double y = 1d / 3d;
            decimal z = 1m / 3m;

            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine(z);
        }
        void Hello()
        {
            Console.WriteLine("Hello world");
        }
    }
}

// input
Enter a number: 6
// output
666
6 6
6 6
6 6
666

pgm
using System;
public class example
{
    public static void Main()
    {
        int x;
        Console.Write("Enter a number: ");
        x=Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("{0}{0}{0}",x);
        Console.WriteLine("{0} {0}",x);
        Console.WriteLine("{0} {0}",x);
        Console.WriteLine("{0} {0}",x);
        Console.WriteLine("{0}{0}{0}",x);
    }
}

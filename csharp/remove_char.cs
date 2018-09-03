using System;
using System.Collections.Generic;
public class example {
  static void Main(string[] args)
        {
            Console.WriteLine(remove_char("example", 1));
            Console.WriteLine(remove_char("example", 6));
            Console.WriteLine(remove_char("example", 0));     
        }
       public static string remove_char(string str, int n)
        {
            return str.Remove(n, 1);
        }
}

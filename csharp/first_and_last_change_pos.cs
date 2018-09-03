using System;
using System.Collections.Generic;
public class example {
  static void Main(string[] args)
        {
            Console.WriteLine(first_last("csharp"));
            Console.WriteLine(first_last("examples"));
            Console.WriteLine(first_last("x"));
        }
       public static string first_last(string ustr)
        {
            return ustr.Length > 1
                ? ustr.Substring(ustr.Length - 1) + ustr.Substring(1, ustr.Length - 2) + ustr.Substring(0, 1) : ustr;
        }
}

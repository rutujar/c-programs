using System;
using System.Text;
public class example {
  static void Main(string[] args)
        {
           string str; 
           Console.Write("Input a string : ");
           str = Console.ReadLine();
           if (str.Length>=1)
           {
           var s = str.Substring(0,1);
           Console.WriteLine(s + str + s);
           }
        }
}

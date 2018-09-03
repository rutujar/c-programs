using System;
using System.Collections.Generic;
public class example {
 static void Main(string[] args) {
  Console.WriteLine("\nInput an integer:");
  int x = Convert.ToInt32(Console.ReadLine());
  Console.WriteLine(result(x));
 }
 public static bool result(int n) {
  if (Math.Abs(n - 100) <= 10 || Math.Abs(n - 200) <= 10)
   return true;
  return false;
 }
}

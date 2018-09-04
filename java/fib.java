import java.util.*;

public class Main
{
	public static void main(String[] args) {
		int c = 7, num1 = 0, num2 = 1;
        System.out.print("Fibonacci Series of \n"+c);
        for (int i = 1; i <=c; ++i)
        {
            System.out.print(num1+" ");
            int p = num1 + num2;
            num1 = num2;
            num2 = p;
        }
	}
}

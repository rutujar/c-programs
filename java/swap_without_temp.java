import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a,b,temp;
		Scanner sc=new Scanner(System.in);
		 System.out.println("First number = ");
		 a=sc.nextInt();
        System.out.println("Second number = ");
        b=sc.nextInt();
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("a is"+a );
		System.out.println("b is" +b);
	}
}

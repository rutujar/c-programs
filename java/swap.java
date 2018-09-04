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
		temp=a;
		a=b;
		b=temp;
		System.out.println("a is"+a );
		System.out.println("b is" +b);
	}
}

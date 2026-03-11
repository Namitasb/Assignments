import java.util.Scanner;

public class PrintLargestNumber
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int no1 = sc.nextInt();

		System.out.println("Enter a number : ");
		int no2 = sc.nextInt();
		
		System.out.println("Enter a number : ");
		int no3 = sc.nextInt();
		
		if(no1 > no2) 
		{
			if (no1 > no3)
			{
			System.out.println(no1+" is largest. ");
			}
			else
			{
			System.out.println(no3+" is largest.");
			}
		}
		else
		{	if (no2 > no3)
			{
			System.out.println(no2+" is largest. ");
			}
			else
			{
			System.out.println(no3+" is largest.");
			}
		}
	}
}
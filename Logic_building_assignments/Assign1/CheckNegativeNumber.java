import java.util.Scanner;

public class CheckNegativeNumber
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int n = sc.nextInt();
		
		if(n < 0) 
		{
			System.out.println(n+" is negative number ");
		}
		else
		{
			System.out.println(n+" is not a negative number ");
		}
	}
}
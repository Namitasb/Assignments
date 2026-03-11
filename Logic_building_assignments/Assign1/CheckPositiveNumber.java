import java.util.Scanner;

public class CheckPositiveNumber
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int n = sc.nextInt();
		
		if(n > 0) 
		{
			System.out.println(n+" is a positive number ");
		}
		else
		{
			System.out.println(n+" is not a positive  number ");
		}
	}
}
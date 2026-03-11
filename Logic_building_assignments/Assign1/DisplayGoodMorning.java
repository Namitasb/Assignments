import java.util.Scanner;

public class DisplayGoodMorning
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter time in 24 hour format: ");
		int n = sc.nextInt();
		
		if(n >=5 && n < 12) 
		{
			System.out.println("Good Morning ");
		}
		
	}
}
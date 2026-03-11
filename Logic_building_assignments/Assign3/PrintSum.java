import java.util.Scanner;

public class PrintSum 
{
	public static int calculateSum(int n) 
	{
		int sum = 0;
		for (int i = 1; i <= n; i++) 
		{
			sum += i;
        		}
        		return sum;
    	}

	public static void main(String[] args) 
	{

		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter a number: ");
		int n = scanner.nextInt();

		int total = calculateSum(n);

		System.out.println("The sum of numbers from 1 to " + n + " is: " + total);

		scanner.close();
	}
}

import java.util.Scanner;

public class SumOfArrayElements 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int numbers[] = new int[5]; 

        		int sum = 0;

		System.out.print("Enter 5 integers: ");
        		for (int i = 0; i < numbers.length; i++) 
		{
			numbers[i] = sc.nextInt();
        		}

		 for (int num : numbers) 
		{
            			sum += num;
        		}

        		System.out.println("The sum of all numbers is: " + sum);
        
        
	}
}

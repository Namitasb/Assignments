import java.util.Scanner;
import java.util.Arrays;

public class ArrayLargestElement 
{

	public static void main(String[] args) 
	{

		Scanner scanner = new Scanner(System.in);

		int numbers[] = new int[5];

		System.out.print("Enter 5 integers: ");

      
        		for (int i = 0; i < numbers.length; i++) 
		{
            			numbers[i] = scanner.nextInt();
        		}

        		
        		Arrays.sort(numbers);

        		// Largest element will be at the last index after sorting
       		int largest = numbers[numbers.length - 1];

        		System.out.println("The largest element is: " + largest);

        		
    }
}

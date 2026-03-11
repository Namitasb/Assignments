import java.util.Scanner;
import java.util.Arrays;

public class SortArray
{

	public static void main(String[] args)
    	{

        		Scanner scanner = new Scanner(System.in);

       		int[] numbers = new int[5];

        		System.out.print("Enter 5 integers: ");

       
        		for (int i = 0; i < numbers.length; i++)
        		{
            			numbers[i] = scanner.nextInt();
        		}

        
        		Arrays.sort(numbers);

        		System.out.print("Sorted array: ");

        
        		for (int num : numbers)
        		{
            			System.out.print(num + " ");
        		}

        
    	}
}

import java.util.Scanner;
import java.util.Arrays;

public class SearchArrayElement
{

	public static void main(String[] args)
    	{

        		Scanner sc = new Scanner(System.in);

        		Integer[] numbers = new Integer[5];

        		System.out.print("Enter 5 integers: ");

        		
        		for (int i = 0; i < numbers.length; i++)
        		{
            			numbers[i] = sc.nextInt();
        		}

        		System.out.print("Enter the number to search: ");
        		int searchNumber = sc.nextInt();

        		
        		if (Arrays.asList(numbers).contains(searchNumber))
        		{
            			System.out.println("Found");
        		}
        		else
        		{
            			System.out.println("Not Found");
        		}

        		
    	}
}

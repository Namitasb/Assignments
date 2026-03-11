import java.util.Scanner;

public class SumOfTwoNumbers 
{

    	// Method to calculate sum
    	public static int sumOfTwoNumbers(int num1, int num2) 
	{
        		return num1 + num2;
    	}

    	public static void main(String[] args) 
	{

        		Scanner scanner = new Scanner(System.in);

        		// Taking user input
        		System.out.print("Enter first number: ");
        		int firstNumber = scanner.nextInt();

        		System.out.print("Enter second number: ");
        		int secondNumber = scanner.nextInt();

        		// Calling the method
        		int result = sumOfTwoNumbers(firstNumber, secondNumber);

        		// Printing the result
        		System.out.println("The sum of " + firstNumber + " and " + secondNumber + " is " + result + ".");

        		scanner.close();
    	}
}

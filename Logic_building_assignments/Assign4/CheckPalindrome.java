import java.util.Scanner;

public class CheckPalindrome
{
    	public static void main(String[] args)
    	{
        		Scanner sc = new Scanner(System.in);
        
        		System.out.print("Enter a string: ");
        		String input = sc.nextLine();
        
        		String cleaned = input.replaceAll("[\\W]", "").toLowerCase();
        		String reversed = "";
        
        		for (int i = cleaned.length() - 1; i >= 0; i--)
        		{
            			reversed += cleaned.charAt(i);
        		}
        
        		if (cleaned.equals(reversed))
        		{	
            			System.out.println("The string '" + input + "' is a palindrome.");
        		}
        		else
        		{
            			System.out.println("The string '" + input + "' is not a palindrome.");
        		}
        
        
    	}
}

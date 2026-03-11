import java.util.Scanner;

public class CountVowels
{
    	public static void main(String[] args)
    	{
        		Scanner sc = new Scanner(System.in);
        
        		System.out.print("Enter a string: ");
        		String input = sc.nextLine();
        
       		int count = 0;
        		String vowels = "aeiouAEIOU";
        
        		for (int i = 0; i < input.length(); i++)
        		{
            			if (vowels.indexOf(input.charAt(i)) != -1)
            			{
                				count++;
            			}
        		}
        
        		System.out.println("The number of vowels in '" + input + "' is: " + count);
        
        
    	}
}

import java.util.Scanner;

public class PrintMenu 
{

	public static void main(String[] args) 
	{

		Scanner scanner = new Scanner(System.in);
		int choice;

		do 
		{
            
			System.out.println("\n===== MENU =====");

			System.out.println("1. Grade Evaluation System");
			System.out.println("2. Leap Year Check");
			System.out.println("3. Day of the Week");
			System.out.println("4. Identify Default Values of Variables");
			System.out.println("5. Exit");

			System.out.print("Enter your choice: ");
			choice = scanner.nextInt();

			switch (choice) 
			{
				case 1: gradeEvaluationSystem();
					break;
				case 2: leapYearCheck();
					break;
				case 3: dayOfTheWeek();
					break;
				case 4: identifyDefaultValues();
					break;
				case 5: System.out.println("Exiting the program...");
					break;
				default: System.out.println("Invalid choice. Please enter 1-					5.");
			}

		} while (choice != 5);

		scanner.close();
	}

   	 // Problem 1: Grade Evaluation System
    	public static void gradeEvaluationSystem() 
	{
		int maths = 80, science = 85, history = 90;

		double average = (maths + science + history) / 3.0;

        		System.out.println("Average Marks: " + average);

        		if (average >= 90) 
			System.out.println("Grade: A");
        		else if (average >= 70) 
			System.out.println("Grade: B");
        		else if (average >= 50) 
			System.out.println("Grade: C");
        		else if (average >= 30) 
			System.out.println("Grade: D");
        		else 
			System.out.println("Grade: Fail");
	}

    	// Problem 2: Leap Year Check
    	public static void leapYearCheck() 
	{
        		Scanner scanner = new Scanner(System.in);
        		System.out.print("Enter a year: ");
        		int year = scanner.nextInt();
        		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
            			System.out.println(year + " is a leap year.");
        		} 
		else 
		{
           			 System.out.println(year + " is not a leap year.");
        		}
    	}

    	// Problem 3: Day of the Week
    	public static void dayOfTheWeek() 
	{
        		Scanner scanner = new Scanner(System.in);
        		System.out.print("Enter day number (1-7): ");
        		int dayNumber = scanner.nextInt();
        		switch (dayNumber) 
		{
            			case 1: System.out.println("The day is Monday."); 
				break;
            			case 2: System.out.println("The day is Tuesday."); 
				break;
            			case 3: System.out.println("The day is Wednesday."); 
				break;
            			case 4: System.out.println("The day is Thursday."); 
				break;
           			case 5: System.out.println("The day is Friday."); 
				break;
            			case 6: System.out.println("The day is Saturday."); 
				break;
            			case 7: System.out.println("The day is Sunday."); 
				break;
            			default: System.out.println("Invalid day number.");
        		}
	 }

    	// Problem 4: Identify Default Values of Variables
    	public static void identifyDefaultValues() 
	{
        		
        		byte a = 0;
        		short b = 0;
        		int c = 0;
       		long d = 0L;
        		float e = 0.0f;
        		double f = 0.0;
        		char g = 'A';
        		boolean h = false;

        		System.out.println("byte a = " + a);
        		System.out.println("short b = " + b);
        		System.out.println("int c = " + c);
        		System.out.println("long d = " + d);
        		System.out.println("float e = " + e);
        		System.out.println("double f = " + f);
        		System.out.println("char g = " + g);
        		System.out.println("boolean h = " + h);
    	}
}

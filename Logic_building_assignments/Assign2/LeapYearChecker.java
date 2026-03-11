public class LeapYearChecker 
{
	public static void main(String[] args) 
	{

        
        		int year1 = 2024;
        		int year2 = 1900;
		int year3 = 2000;
		int year4 = 2001;

        		checkLeapYear(year1);
        		checkLeapYear(year2);
		checkLeapYear(year3);
		checkLeapYear(year4);
    	}

    	public static void checkLeapYear(int year) 
	{

        		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
            			System.out.println(year + " is a leap year.");
        		} 
		else 
		{
            			System.out.println(year + " is not a leap year.");
        		}
    	}
}

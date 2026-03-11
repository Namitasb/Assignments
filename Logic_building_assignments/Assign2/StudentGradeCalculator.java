public class StudentGradeCalculator
{
    	public static void main(String[] args) 
	{
        
        		
       		 int maths = 80;
        		 int science = 85;
        		 int history = 90;


        		
        		double average = (maths + science + history) / 3.0;

        		
       		System.out.println("Average Marks: " + average);

        		
        		if (average >= 90) {
            			System.out.println("Grade: A");
        		}
		else if (average >= 70) 
		{
            			System.out.println("Grade: B");
        		} 
		else if (average >= 50) 
		{
            			System.out.println("Grade: C");
        		}
		 else if (average >= 30) 
		{
            			System.out.println("Grade: D");
        		}
		 else 
		{
            			System.out.println("Grade: Fail");
        		}

		int maths1 =70;
        		 int science1 = 75;
        		 int history1 = 80;


        		
        		double average1 = (maths1 + science1 + history1) / 3.0;

        		
       		System.out.println("Average Marks: " + average1);

        		
        		if (average1 >= 90) {
            			System.out.println("Grade: A");
        		}
		else if (average1 >= 70) 
		{
            			System.out.println("Grade: B");
        		} 
		else if (average1 >= 50) 
		{
            			System.out.println("Grade: C");
        		}
		 else if (average1 >= 30) 
		{
            			System.out.println("Grade: D");
        		}
		 else 
		{
            			System.out.println("Grade: Fail");
        		}
	}
}

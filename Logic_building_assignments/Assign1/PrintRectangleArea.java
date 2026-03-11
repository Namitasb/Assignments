import java.util.Scanner;

public class PrintRectangleArea
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter length of a rectangle: ");
		float length = sc.nextFloat();

		System.out.println("Enter breadth of a rectangle:  : ");
		float breadth = sc.nextFloat();


		float area = length * breadth;

		System.out.println(" Area of rectangle is: "+area);
		
	}
}
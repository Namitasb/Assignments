import java.util.Scanner;

public class PrintSquareArea
{
	public static void main(String args [])

	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter side of a square : ");
		float side = sc.nextFloat();

		float area = side * side;

		System.out.println(" Area of square is: "+area);
		
	}
}
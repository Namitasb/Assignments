#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = total / 5;

    // Determine grade using ternary operator
    grade = (percentage >= 75) ? 'A' :
            (percentage >= 60) ? 'B' :
            (percentage >= 45) ? 'C' : 'F';

    // Output
    printf("\nMarks in Subjects:\n");
    printf("Subject 1: %.2f\n", m1);
    printf("Subject 2: %.2f\n", m2);
    printf("Subject 3: %.2f\n", m3);
    printf("Subject 4: %.2f\n", m4);
    printf("Subject 5: %.2f\n", m5);

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    // Print grade
    printf("\nGrade = %c", grade);

    return 0;
}


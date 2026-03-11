#include <stdio.h>

/* Function Prototypes */
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    float c = 25.0;
    float f = 77.0;
    float resultF, resultC;

    // Function Calls
    resultF = celsiusToFahrenheit(c);
    resultC = fahrenheitToCelsius(f);

    // Output
    printf("Celsius to Fahrenheit:\n");
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, resultF);

    printf("\nFahrenheit to Celsius:\n");
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, resultC);

    return 0;
}

/* Function Definitions */

float celsiusToFahrenheit(float c)
{
    return (c * 9/5) + 32;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5/9;
}
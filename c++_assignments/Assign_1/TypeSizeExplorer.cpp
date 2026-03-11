#include <stdio.h>

int main()
{
    printf("Size of short int = %lu bytes\n", sizeof(short int));
    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of long int = %lu bytes\n", sizeof(long int));
    printf("Size of long long int = %lu bytes\n", sizeof(long long int));
    printf("Size of unsigned int = %lu bytes\n", sizeof(unsigned int));
    printf("Size of float = %lu bytes\n", sizeof(float));
    printf("Size of double = %lu bytes\n", sizeof(double));
    printf("Size of long double = %lu bytes\n", sizeof(long double));
    printf("Size of char = %lu byte\n", sizeof(char));

    return 0;
}

/*
Answer:

1. Which two types have the same size on your machine?
   int and unsigned int usually have the same size (typically 4 bytes).
   float and int may also have same size on many machines (4 bytes).

2. Does unsigned int have a different size than int?
   No, unsigned int and int usually have the same size.
   The difference is only in the range of values, not the size.
*/

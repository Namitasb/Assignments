#include <stdio.h>

int main()
{
    int x = 10, y = 20, z = 30;
    int *px = &x, *py = &y, *pz = &z;
    int temp;

    // Before swap
    printf("Before Swap:\n");
    printf("x = %d  y = %d  z = %d\n", *px, *py, *pz);

    printf("Addresses:\n");
    printf("px = %p\n", px);
    printf("py = %p\n", py);
    printf("pz = %p\n", pz);

    // Swap x and z using pointers only
    temp = *px;
    *px = *pz;
    *pz = temp;

    // After swap
    printf("\nAfter Swap:\n");
    printf("x = %d  y = %d  z = %d\n", *px, *py, *pz);

    printf("Addresses (unchanged):\n");
    printf("px = %p\n", px);
    printf("py = %p\n", py);
    printf("pz = %p\n", pz);

    return 0;
}
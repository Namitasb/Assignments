#include <iostream>
using namespace std;

// Function Prototype
void findMinMax(int x, int y, int z, int &minVal, int &maxVal);

int main()
{
    int n1 = 10, n2 = 25, n3 = 5;
    int lo = 0, hi = 0;

    // Before function call
    cout << "Before function call:" << endl;
    cout << "lo = " << lo << "  hi = " << hi << endl;

    // Function call
    findMinMax(n1, n2, n3, lo, hi);

    // After function call
    cout << "\nAfter function call:" << endl;
    cout << "Numbers: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "Minimum = " << lo << endl;
    cout << "Maximum = " << hi << endl;

    return 0;
}

// Function Definition
void findMinMax(int x, int y, int z, int &minVal, int &maxVal)
{
    // Minimum calculation
    if (x <= y && x <= z)
        minVal = x;
    else if (y <= x && y <= z)
        minVal = y;
    else
        minVal = z;

    // Maximum calculation
    if (x >= y && x >= z)
        maxVal = x;
    else if (y >= x && y >= z)
        maxVal = y;
    else
        maxVal = z;
}
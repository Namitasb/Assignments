#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << " b = " << b << endl;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByAddress: a = " << *a << " b = " << *b << endl;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << " b = " << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swap: x = " << x << " y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << " y = " << y << endl;

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << " y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << " y = " << y << endl;

    return 0;
}

/*
Q2.2 How reference variables act as aliases

Ans :A reference variable is another name (alias) for an existing variable.

Example:

int x = 10;
int &ref = x;

Here:

ref and x refer to the same memory location.

Changing ref changes x.

Example:

ref = 20;

Now:

x = 20
How this affects swapByReference()

In the function:

void swapByReference(int &a, int &b)

a becomes an alias of x

b becomes an alias of y

So operations inside the function directly modify the original variables in main().

Memory idea:

main(): x ----\
                → same memory used in function as a
swapByReference()

main(): y ----\
                → same memory used in function as b

Because of this aliasing, the swap actually changes the original variables without using pointers.


*/
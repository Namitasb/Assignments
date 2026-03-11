#include <iostream>
using namespace std;

int main() {
    int value = 10;

    // Pointer pointing to the variable
    int *ptr = &value;

    // Reference to the same variable
    int &ref = value;

    cout << "Initial value: " << value << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modification using pointer: " << value << endl;

    // Modify using reference
    ref = 30;
    cout << "After modification using reference: " << value << endl;

    return 0;
}

/*
Q3.2 Explanation

1. Two differences between pointer and reference
Pointer	Reference
Stores the memory address of a variable	Acts as an alias (another name) for a variable
Requires dereferencing *ptr to access value	Accessed directly like a normal variable
Can be NULL	Cannot be NULL
Can be reseated to another address	Cannot be reseated after initialization

Example:

Pointer

int a = 10;
int *p = &a;

Reference

int a = 10;
int &r = a;


2️. Why references cannot be reseated but pointers can

A pointer is a variable that stores an address, so we can change the address it holds.

Example:

int a = 5, b = 10;
int *p = &a;
p = &b;   // pointer now points to b

A reference is just another name for a variable, not a separate variable storing an address.

Example:

int a = 5, b = 10;
int &r = a;
r = b;   // assigns value of b to a, does NOT reseat reference

So r still refers to a.



3️. Why references cannot be NULL

A reference must always refer to a valid object when it is created.

Example:

int &r;   //  invalid

The compiler requires initialization:

int a = 10;
int &r = a;   // valid

Reason:

A reference represents an existing variable.

If it were NULL, it would mean referring to nothing, which violates the concept of a reference.

Pointers can be NULL because they store addresses, and an address can be empty (nullptr).


*/
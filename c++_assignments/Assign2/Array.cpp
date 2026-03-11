#include <iostream>
using namespace std;

int main() {

    int *arr;

    // Allocate memory for 5 integers
    arr = new int[5];

    // Take user input
    cout << "Enter 5 integers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Print values
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;


    int *arr1;

    // Allocate memory using malloc
    arr1 = (int*) malloc(5 * sizeof(int));

    // Take user input
    cout << "Enter 5 integers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    // Print values
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Free memory
    free(arr1);

    
    return 0;
}

/*
Q4.3 Explanation

1️. Why constructors are not called when using malloc

malloc only allocates raw memory.
It does not know anything about C++ classes or objects.

Example:

malloc → reserves memory only

It does not execute constructors, so object initialization does not happen.

In contrast:

new → allocates memory + calls constructor

This ensures objects are properly initialized.


2️. Why new is preferred in C++

new is preferred because it:

✔ Calls constructors automatically
✔ Returns the correct pointer type (no casting required)
✔ Works with C++ classes and objects
✔ Allows object initialization

Example:

int *p = new int;

No type casting required.


3️. Difference in return types and initialization
Feature	new	malloc
Language	C++	C
Return type	Correct pointer type	void*
Type casting	Not required	Required
Initialization	Calls constructor	No initialization
Memory release	delete / delete[]	free()

Example:

int *p = new int;     // no cast
int *p = (int*) malloc(sizeof(int));   // cast needed


4️. Why malloc cannot initialize complex types

Complex types (like classes, objects, or structures with constructors) require:

Constructor execution

Proper initialization of members

malloc only allocates raw bytes of memory and does not execute constructors, so it cannot properly initialize objects.

Example:

class Test {
public:
    Test() {
        cout << "Constructor called";
    }
};

Using new:

Test *t = new Test();   // constructor runs

Using malloc:

Test *t = (Test*) malloc(sizeof(Test));   // constructor NOT called

This may lead to undefined or incorrect behavior, which is why new is recommended in C++.

*/
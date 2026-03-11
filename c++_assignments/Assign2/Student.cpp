#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:

    // 1. Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    // 2. Parameterized constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this pointer
    Student(int rollNo, string name, float marks, bool useThis) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // Function to print student details
    void printDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main() {

    // Object using default constructor
    Student s1;

    // Objects using parameterized constructors
    Student s2(1, "Alice", 85.5);
    Student s3(2, "Bob", 90.0, true);

    cout << "Student 1:" << endl;
    s1.printDetails();

    cout << "Student 2:" << endl;
    s2.printDetails();

    cout << "Student 3:" << endl;
    s3.printDetails();

    return 0;
}

/*
Q5.2 Answers
1️. When does the compiler generate a default constructor?

The compiler automatically generates a default constructor when:

No constructor is defined in the class.

Example:

class Student {
    int rollNo;
};

The compiler automatically creates:

Student() {}

This constructor initializes members with default or garbage values.

2️. When does the compiler NOT generate a default constructor?

The compiler does not generate a default constructor if:

The programmer defines any constructor in the class.

Example:

class Student {
public:
    Student(int r) {}
};

Now this will cause an error:

Student s;  //  error: no default constructor

Because the compiler stops generating the automatic default constructor.

3️. Can constructors be overloaded?

Yes, constructors can be overloaded.

Constructor overloading means multiple constructors with different parameter lists in the same class.

Example:

Student();                     // default constructor
Student(int r);                // one parameter
Student(int r, string name);   // two parameters

Each constructor is called depending on how the object is created.

Example:

Student s1;                 // calls default constructor
Student s2(10);             // calls constructor with 1 parameter
Student s3(10, "John");     // calls constructor with 2 parameters

This allows different ways to initialize objects.

*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    const int employeeId;  // const member
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) 
        : employeeId(id), name(n), salary(s) {}  // initialize const and others

    // Function to display details
    void display() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Alice", 50000.0);

    e1.display();

    return 0;
}

/*
Q6.3 Explanation
1️. Why must const members be initialized in initializer list?

Const members cannot be modified after they are created.

The only way to set their value is during object construction using the initializer list.

Example:

Employee(int id) : employeeId(id) {}  //  correct

2️. What happens if you try to assign a const member inside constructor body?
Employee(int id) {
    employeeId = id;  // error: cannot assign to const member
}

Compiler error occurs because the object is already created, and const members cannot be assigned after creation.


3️.Why is initializer list faster than assignment?

Initializer list directly initializes members in memory.

Assignment inside constructor first calls default constructor (if any) and then assigns, causing extra work.

For primitive types it may not matter much, but for objects or const/reference members, initializer list is more efficient and necessary.



*/
#include<iostream>
using namespace std;

class Student
{
    protected:
    int rollNo;

    public:
    Student()
    {
        rollNo = 0;
    }

    Student(int rollno)
    {
        rollNo = rollno;
    }
     
    virtual void display()
    {
        cout<<rollNo;
    }

};

class Result : public Student
{
    protected:
    float marks;

    public:

    Result(): Student(0)
    {
        rollNo = 0;
    }


    Result(int rollNo, float marks): Student(rollNo),marks(marks)
    {
        rollNo = 0;
    }
     
    void display() override
    {
        cout<<rollNo<<" "<<marks;
    }

};

int main()
{
    Result res;
    Result res1(101,99);

    Student *s = &res1;

    s->display();
    
}

/*
Answers to the Questions
1. Which constructor will be called first: Student or Result?

The Student (base class) constructor is called first, followed by the Result (derived class) constructor.

Reason:
In C++, when an object of a derived class is created, the base class part must be constructed first before the derived class initializes its own members.

Order:

Student constructor
Result constructor


2. Does the program demonstrate early binding or late binding?

The program demonstrates late binding (runtime polymorphism).

Reason:

The display() function is declared as virtual.

It is called using a base class pointer (Student*) that points to a derived class object (Result).

The function call is resolved at runtime, not compile time.

3. Why is the display() function declared as virtual?

display() is declared virtual to enable runtime polymorphism.

This ensures that:

When a base class pointer calls display(),

The derived class version of the function is executed if the pointer points to a derived object.

Without virtual:

The base class display() would always run (early binding).

With virtual:

ptr->display();

calls Result::display() because ptr points to a Result object. */
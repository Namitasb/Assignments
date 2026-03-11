#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
    // Setters
    void setEmpID(int id)
    {
        empID = id;
    }

    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpSalary(double salary)
    {
        empSalary = salary;
    }

    // Getters
    int getEmpID()
    {
        return empID;
    }

    string getEmpName()
    {
        return empName;
    }

    double getEmpSalary()
    {
        return empSalary;
    }

    // Calculate Gross Salary
    void calculateGrossSalary()
    {
        if(empSalary <= 5000)
            grossSalary = empSalary + empSalary*0.10;
        else if(empSalary <= 10000)
            grossSalary = empSalary + empSalary*0.15;
        else
            grossSalary = empSalary + empSalary*0.20;
    }

    // Display Details
    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nSalary: " << empSalary;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee e;
    int choice, id;
    string name;
    double salary;

    do
    {
        cout << "\n1. Add Employee";
        cout << "\n2. Calculate Gross Salary";
        cout << "\n3. Display Employee Details";
        cout << "\n4. Update Employee";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Salary: ";
                cin >> salary;

                e.setEmpID(id);
                e.setEmpName(name);
                e.setEmpSalary(salary);
                break;

            case 2:
                e.calculateGrossSalary();
                cout << "Gross Salary Calculated\n";
                break;

            case 3:
                e.displayEmployeeDetails();
                break;

            case 4:
                cout << "Enter New Name: ";
                cin >> name;
                cout << "Enter New Salary: ";
                cin >> salary;

                e.setEmpName(name);
                e.setEmpSalary(salary);
                break;

            case 5:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 5);

    return 0;
}
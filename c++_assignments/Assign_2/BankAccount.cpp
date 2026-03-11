#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Setters
    void setAccountNumber(int acc)
    {
        accountNumber = acc;
    }

    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }

    void setBalance(double bal)
    {
        balance = bal;
    }

    // Getters
    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    // Deposit Method
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully\n";
    }

    // Withdraw Method
    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    // Display Details
    void displayAccountDetails()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder Name: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    int choice, accNo;
    string name;
    double bal, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Initial Balance: ";
    cin >> bal;

    b.setAccountNumber(accNo);
    b.setAccountHolderName(name);
    b.setBalance(bal);

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Details";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Amount: ";
                cin >> amount;
                b.deposit(amount);
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                b.withdraw(amount);
                break;

            case 3:
                b.displayAccountDetails();
                break;

            case 4:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}
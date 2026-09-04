
#include <iostream>
using namespace std;

class BankAccount
{
    int accountNo;
    string name;
    float balance;

public:

    // Constructor
    BankAccount(int a, string n, float b)
    {
        accountNo = a;
        name = n;
        balance = b;
        cout << "\nAccount created successfully!" << endl;
    }

    // User-defined function
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited: Rs. " << amount << endl;
    }

    // User-defined function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn: Rs. " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // User-defined function
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nDestructor called. Account object destroyed." << endl;
    }
};

int main()
{
    int accountNo;
    string name;
    float balance, depositAmount, withdrawAmount;

    // Taking input from user
    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    // Creating object using constructor
    BankAccount b1(accountNo, name, balance);

    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    b1.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    b1.withdraw(withdrawAmount);

    // Display account details
    b1.display();

    return 0;
}


#include <iostream>
using namespace std;

class Bank
{
public:
    virtual void calculateInterest()
    {
        cout << "General bank interest rate is 5%" << endl;
    }

    virtual void display()
    {
        cout << "Welcome to Bank" << endl;
    }
};

class SBI : public Bank
{
public:
    void calculateInterest()
    {
        cout << "SBI Interest Rate is 7%" << endl;
    }

    void display()
    {
        cout << "Welcome to SBI Bank" << endl;
    }
};

class HDFC : public Bank
{
public:
    void calculateInterest()
    {
        cout << "HDFC Interest Rate is 8%" << endl;
    }

    void display()
    {
        cout << "Welcome to HDFC Bank" << endl;
    }
};

class ICICI : public Bank
{
public:
    void calculateInterest()
    {
        cout << "ICICI Interest Rate is 7.5%" << endl;
    }

    void display()
    {
        cout << "Welcome to ICICI Bank" << endl;
    }
};

int main()
{
    Bank *ptr;

    SBI s;
    HDFC h;
    ICICI i;

    cout << "----- SBI BANK -----" << endl;
    ptr = &s;
    ptr->display();
    ptr->calculateInterest();

    cout << "\n----- HDFC BANK -----" << endl;
    ptr = &h;
    ptr->display();
    ptr->calculateInterest();

    cout << "\n----- ICICI BANK -----" << endl;
    ptr = &i;
    ptr->display();
    ptr->calculateInterest();

    return 0;
}
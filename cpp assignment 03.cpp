#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    // Default Constructor
    Number()
    {
        a = 0;
        b = 0;
    }

    // Parameterized Constructor
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    // Operator Overloading
    Number operator+(Number obj)
    {
        Number temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;

        return temp;
    }

    // Display Function
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    int a1, b1, a2, b2;

    // Default constructor
    Number n1;

    cout << "Default Constructor:" << endl;
    n1.display();

    // Taking user input
    cout << "\nEnter values for first object:" << endl;
    cout << "Enter a: ";
    cin >> a1;
    cout << "Enter b: ";
    cin >> b1;

    cout << "\nEnter values for second object:" << endl;
    cout << "Enter a: ";
    cin >> a2;
    cout << "Enter b: ";
    cin >> b2;

    // Parameterized constructors
    Number n2(a1, b1);
    Number n3(a2, b2);

    // Operator overloading
    Number n4 = n2 + n3;

    cout << "\nFirst Object:" << endl;
    n2.display();

    cout << "\nSecond Object:" << endl;
    n3.display();

    cout << "\nAfter Addition using Operator Overloading:" << endl;
    n4.display();

    return 0;
}
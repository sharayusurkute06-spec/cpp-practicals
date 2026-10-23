
#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    void display() {
        cout << "Sum = " << add() << endl;
    }
};

// Function Template
template <class T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    cout << "--- Integer Operations ---" << endl;
    cout << "Enter two integers: ";
    cin >> x >> y;

    Calculator<int> c1(x, y);
    c1.display();

    cout << "Maximum = " << maximum(x, y) << endl;

    float p, q;

    cout << "\n--- Decimal Operations ---" << endl;
    cout << "Enter two decimal numbers: ";
    cin >> p >> q;

    Calculator<float> c2(p, q);
    c2.display();

    cout << "Maximum = " << maximum(p, q) << endl;

    return 0;
}

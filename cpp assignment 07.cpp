
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try {
        if (b == 0) {
            throw b;
        }

        if (a < 0 || b < 0) {
            throw "Negative numbers are not allowed";
        }

        cout << "Division = " << (float)a / b << endl;
    }

    catch (int) {
        cout << "Exception: Division by zero is not allowed!" << endl;
    }

    catch (const char* message) {
        cout << "Exception: " << message << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}

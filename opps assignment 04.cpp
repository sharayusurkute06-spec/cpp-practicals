#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr;
    int sum = 0;
    float average;


    cout << "Enter the number of elements: ";
    cin >> n;


    ptr = new int[n];


    cout << "\nEnter " << n << " integer values:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> ptr[i];
    }


    cout << "\nEntered elements are:\n";
    for(int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
        sum = sum + ptr[i];
    }


    average = (float)sum / n;

    cout << "\n\nSum = " << sum;
    cout << "\nAverage = " << average;

 
    cout << "\n\nMemory addresses:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Address of element " << i + 1
             << " = " << &ptr[i] << endl;
    }

    
    delete[] ptr;

 
    ptr = nullptr;

    cout << "\nDynamic memory has been released successfully.";

    return 0;
}
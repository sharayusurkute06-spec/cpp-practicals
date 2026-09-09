#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:

    // Default Constructor
    Student()
    {
        name = "Unknown";
        marks = 0;
    }

    // Parameterized Constructor
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        marks = s.marks;
    }

    // Member Function to display details
    void display()
    {
        cout << "Name  : " << name << endl;
        cout << "Marks : " << marks << endl;
    }

    // Member Function to update marks
    void updateMarks(int m)
    {
        marks = m;
    }

    // Member Function to display result
    void result()
    {
        if (marks >= 40)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};

int main()
{
    string name;
    int marks;
    int newMarks;

    // User input for parameterized constructor
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks: ";
    cin >> marks;

    // Object using Default Constructor
    Student s1;

    // Object using Parameterized Constructor
    Student s2(name, marks);

    // Object using Copy Constructor
    Student s3(s2);

    cout << endl;
    cout << "===== DEFAULT CONSTRUCTOR =====" << endl;
    s1.display();
    s1.result();

    cout << endl;
    cout << "===== PARAMETERIZED CONSTRUCTOR =====" << endl;
    s2.display();
    s2.result();

    cout << endl;
    cout << "===== COPY CONSTRUCTOR =====" << endl;
    s3.display();
    s3.result();

    // User input for updating marks
    cout << endl;
    cout << "Enter new marks for default object: ";
    cin >> newMarks;

    s1.updateMarks(newMarks);

    cout << endl;
    cout << "===== AFTER UPDATING MARKS =====" << endl;
    s1.display();
    s1.result();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

    static int count;

public:
    // Constructor using this pointer
    Student(int r, string n, float m) {
        this->rollNo = r;
        this->name = n;
        this->marks = m;
        count++;
    }

    // Inline function
    inline void displayGrade() {
        cout << "Grade: ";

        if (marks >= 90)
            cout << "A";
        else if (marks >= 75)
            cout << "B";
        else if (marks >= 60)
            cout << "C";
        else if (marks >= 40)
            cout << "D";
        else
            cout << "Fail";

        cout << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }

    // Friend class declaration
    friend class Result;
};

// Definition of static data member
int Student::count = 0;

// Friend class
class Result {
public:
    void display(Student s) {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    int roll;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    Student s1(roll, name, marks);

    Result r;
    r.display(s1);

    s1.displayGrade();

    Student::showCount();

    return 0;
}

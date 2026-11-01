#include <iostream>
#include <utility>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    // Move constructor
    Student(Student &&s)
    {
        name = move(s.name);
        rollNo = s.rollNo;

        cout << "Move Constructor Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Sharyu", 101);

    cout << "Before Move Operation:" << endl;
    s1.display();

    // Move resources from s1 to s2
    Student s2(move(s1));

    cout << "\nAfter Move Operation:" << endl;

    cout << "\nStudent 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}
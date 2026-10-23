
#include <iostream>
#include <string>
using namespace std;

// 1. SINGLE INHERITANCE
class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudent() {
        getName();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// 2. MULTIPLE INHERITANCE
class Academic {
public:
    int marks;

    void getMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class Sports {
public:
    int sportsMarks;

    void getSportsMarks() {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }
};

class Result : public Academic, public Sports {
public:
    void displayResult() {
        cout << "Total Marks: "
             << marks + sportsMarks << endl;
    }
};

// 3. MULTILEVEL INHERITANCE
class Grandparent {
public:
    void showGrandparent() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class" << endl;
    }
};

// 4. HIERARCHICAL INHERITANCE
class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

// 5. HYBRID INHERITANCE
class HybridPerson {
public:
    string personName;

    void getPersonName() {
        cout << "Enter teaching assistant name: ";
        cin >> personName;
    }
};

class CollegeStudent : virtual public HybridPerson {
public:
    void study() {
        cout << "Student studies" << endl;
    }
};

class Employee : virtual public HybridPerson {
public:
    void work() {
        cout << "Employee works" << endl;
    }
};

class TeachingAssistant : public CollegeStudent,
                          public Employee {
public:
    void display() {
        cout << "Name: " << personName << endl;
        study();
        work();
    }
};

int main() {
    // Single inheritance
    cout << "\n--- SINGLE INHERITANCE ---" << endl;
    Student s;
    s.getStudent();
    s.displayStudent();

    // Multiple inheritance
    cout << "\n--- MULTIPLE INHERITANCE ---" << endl;
    Result r;
    r.getMarks();
    r.getSportsMarks();
    r.displayResult();

    // Multilevel inheritance
    cout << "\n--- MULTILEVEL INHERITANCE ---" << endl;
    Child c;
    c.showGrandparent();
    c.showParent();
    c.showChild();

    // Hierarchical inheritance
    cout << "\n--- HIERARCHICAL INHERITANCE ---" << endl;
    Dog d;
    Cat ct;
    d.eat();
    d.bark();
    ct.eat();
    ct.meow();

    // Hybrid inheritance
    cout << "\n--- HYBRID INHERITANCE ---" << endl;
    TeachingAssistant ta;
    ta.getPersonName();
    ta.display();

    return 0;
}

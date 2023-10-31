#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee : public Person {
private:
    double salary;

public:
    Employee() {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        display();
        cout << "Salary: " << salary << endl;
    }
};

class Student : public Person {
private:
    string studentId;

public:
    Student() {
        cout << "Enter Student ID: ";
        cin >> studentId;
    }

    void displayStudent() {
        display();
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    cout<<"Enter employee details :"<<endl;
    Employee emp;

    cout<<"Enter student details :"<<endl;

    Student stu;

    cout << "\nEmployee Details:\n";
    emp.displayEmployee();

    cout << "\nStudent Details:\n";
    stu.displayStudent();

    return 0;
}
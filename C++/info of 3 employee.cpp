#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int year_of_joining;
    double salary;
    string address;

    Employee(string n, int year, double sal, string addr) {
        name = n;
        year_of_joining = year;
        salary = sal;
        address = addr;
    }

    void displayInfo() {
        cout << left << setw(12) << name
             << left << setw(20) << year_of_joining
             << address << endl;
    }
};

int main() {
    
    Employee employee1("Rahul", 2010, 55000, "64C- WallsStreat");
    Employee employee2("Samar", 2000, 60000, "68D- WallsStreat");
    Employee employee3("Ishita", 2018, 48000, "26B- WallsStreat");

    cout << left << setw(12) << "Name"
         << left << setw(20) << "Year of joining"
         << "Address" << endl;
    employee1.displayInfo();
    employee2.displayInfo();
    employee3.displayInfo();

    return 0;
}

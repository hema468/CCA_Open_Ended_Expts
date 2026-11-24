#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Calculating Employee Salary" << endl;
    }
};
class Manager : public Employee {
    float basicSalary;
    float allowance;
public:
    Manager(float basic, float allow) {
        basicSalary = basic;
        allowance = allow;
    }
    void calculateSalary() {
        float totalSalary = basicSalary + allowance;
        cout << "Manager Salary = " << totalSalary << endl;
    }
};
class Developer : public Employee {
    float basicSalary;
    float bonus;
public:
    Developer(float basic, float b) {
        basicSalary = basic;
        bonus = b;
    }
    void calculateSalary() {
        float totalSalary = basicSalary + bonus;
        cout << "Developer Salary = " << totalSalary << endl;
    }
};

int main() {
    int choice;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "Enter Employee Type: ";
    cin >> choice;
    Employee *emp;
    if (choice == 1) {
        float basic, allowance;
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter Allowance: ";
        cin >> allowance;
        Manager m(basic, allowance);
        emp = &m;
        emp->calculateSalary();
    }
    else if (choice == 2) {
        float basic, bonus;
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter Bonus: ";
        cin >> bonus;
        Developer d(basic, bonus);
        emp = &d;
        emp->calculateSalary();
    }
    else {
        cout << "Invalid Employee Type";
    }
    return 0;
}
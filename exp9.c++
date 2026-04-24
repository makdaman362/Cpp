#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string empName;
    float basicSalary;
public:
    void getEmployeeInfo() {
        cout << "Enter Employee ID: "; cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: "; getline(cin, empName);
        cout << "Enter Basic Salary: "; cin >> basicSalary;
    }
};

class Department : public Employee {
protected:
    string deptName;
public:
    void getDepartmentInfo() {
        cin.ignore();
        cout << "Enter Department Name: "; getline(cin, deptName);
    }
};

class PF : public Department {
protected:
    float pfAmount;
public:
    void calculatePF() { pfAmount = basicSalary * 0.12; }
    void display() {
        cout << "\nID: " << empId << "\nName: " << empName << "\nDept: " << deptName << "\nPF: " << pfAmount << endl;
    }
};

int main() {
    PF p;
    p.getEmployeeInfo();
    p.getDepartmentInfo();
    p.calculatePF();
    p.display();
    return 0;
}
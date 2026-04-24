#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
public:
    void getStudentInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
};

class Marks : public Student {
private:
    float total;
public:
    void getMarks() {
        cout << "Enter Total Marks: ";
        cin >> total;
    }
    void display() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main() {
    Marks m;
    m.getStudentInfo();
    m.getMarks();
    m.display();
    return 0;
}
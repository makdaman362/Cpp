#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    float billAmount;
    string appointmentDate;
public:
    Patient() {
        name = "Unknown";
        billAmount = 0.0;
        appointmentDate = "00/00/0000";
    }
    Patient(string n, float bill, string date) {
        name = n;
        billAmount = bill;
        appointmentDate = date;
    }
    inline float add(float a, float b) {
        return a + b;
    }
    void display() {
        cout << "\nPatient Name: " << name;
        cout << "\nBilling Amount: " << billAmount;
        cout << "\nAppointment Date: " << appointmentDate << endl;
    }
};

int main() {
    Patient p1;
    Patient p2("Rahul Patil", 1500.50, "15/10/2023");
    cout << "--- Default Constructor ---";
    p1.display();
    cout << "\n--- Parameterized Constructor ---";
    p2.display();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float num, den;
    cout << "Enter numerator and denominator: ";
    cin >> num >> den;
    try {
        if (den == 0) throw "Division by Zero!";
        cout << "Result: " << num / den << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 4);
    Complex c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();
    return 0;
}
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
    float l, w;
public:
    void getData() { cout << "Enter L and W: "; cin >> l >> w; }
    void area() { cout << "Area: " << l * w << endl; }
};

int main() {
    Rectangle r;
    r.getData();
    r.area();
    return 0;
}
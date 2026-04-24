#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() { cout << "Generic Area" << endl; }
};

class Rectangle : public Shape {
    float l, w;
public:
    Rectangle(float len, float wid) : l(len), w(wid) {}
    void area() override { cout << "Rect Area: " << l * w << endl; }
};

int main() {
    Shape* s;
    Rectangle r(10, 5);
    s = &r;
    s->area();
    return 0;
}
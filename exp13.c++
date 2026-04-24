#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float rad) : r(rad) {}
    void area() override { cout << "Circle Area: " << 3.14 * r * r << endl; }
};

int main() {
    Shape* s;
    Circle c(7);
    s = &c;
    s->area();
    return 0;
}
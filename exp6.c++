#include <iostream>
using namespace std;

class Box {
private:
    double width;
public:
    void setWidth(double w) {
        width = w;
    }
    friend void printWidth(Box b);
};

void printWidth(Box b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}
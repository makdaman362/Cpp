#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    float add(float a, float b) { return a + b; }
};

int main() {
    Calculator c;
    cout << "Int Add: " << c.add(5, 10) << endl;
    cout << "Float Add: " << c.add(5.5f, 10.5f) << endl;
    return 0;
}
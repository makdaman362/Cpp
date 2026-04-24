#include <iostream>
using namespace std;

class Demo {
private:
    static int count;
public:
    static void displayCount() {
        cout << "Count value: " << count << endl;
    }
    void increment() {
        count++;
    }
};

int Demo::count = 0;

int main() {
    Demo d1, d2;
    d1.increment();
    d2.increment();
    Demo::displayCount();
    return 0;
}
#include <iostream>
using namespace std;

class Calculator {
public:
    int value;

    Calculator() {
        value = 0;
        cout << "Default constructor called" << endl;
    }

    Calculator(int a) {
        value = a;
        cout << "Constructor with one argument called" << endl;
    }

    Calculator(int a, int b) {
        value = a + b;
        cout << "Constructor with two arguments called" << endl;
    }

    void displayValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Calculator calc1;
    calc1.displayValue();

    Calculator calc2(10);
    calc2.displayValue();

    Calculator calc3(3, 4);
    calc3.displayValue();

    return 0;
}
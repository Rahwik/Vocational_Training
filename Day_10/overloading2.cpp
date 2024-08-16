#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int calculate(int a, int b) {
        return add(a, b);
    }

    int calculate(int a, int b, int c) {
        return multiply(a, calculate(b, c));
    }
};

int main() {
    Calculator calc;

    cout << "Addition: " << calc.calculate(3, 4) << endl;
    cout << "Multiplication: " << calc.calculate(3, 4, 5) << endl;

    return 0;
}
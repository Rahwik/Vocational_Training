#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void multiply() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Multiplication: " << a * b << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << "Division: " << a / b << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

int remainder() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a % b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    multiply();

    divide(num1, num2);

    int rem = remainder();
    cout << "Remainder: " << rem << endl;

    return 0;
}
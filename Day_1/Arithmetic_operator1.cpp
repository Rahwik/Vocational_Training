// basic arithmetic operators
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // arithmetic operators
    cout << a + b << endl;  // addition
    cout << a - b << endl;  // subtraction
    cout << a * b << endl;  // product
    cout << a / b << endl;  // division
    cout << a % b << endl;  // remainder

    // increment and decrement operators
    cout << ++a << endl;  // prefix increment
    cout << --a << endl;  // prefix decrement
    cout << b++ << endl;  // postfix increment
    cout << b-- << endl;  // postfix decrement

    // relational operators
    cout << (a > b) << endl;  // greater than
    cout << (a < b) << endl;  // less than
    cout << (a <= b) << endl;  // less than or equal to
    cout << (a >= b) << endl;  // greater than or equal to

    // conditional operator (ternary operator)
    cout << (a > b ? a : b) << endl;  // logical operator

    // assignment operator
    a = b;
    cout << a << endl;  // assignment operator

    // bitwise operators
    cout << (a & b) << endl;  // bitwise AND

    // logical operators
    cout << (a > b && b < a) << endl;  // logical AND

    return 0;
}
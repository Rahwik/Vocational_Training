#include <iostream>
using namespace std;

class Operation {
private:
    int x1, y1;

public:
    Operation(int x, int y) {
        x1 = x;
        y1 = y;
    }

    // arithmetic operations
    void calc() {
        cout << "Addition: " << x1 + y1 << endl;
        cout << "Subtraction: " << x1 - y1 << endl;
        cout << "Product: " << x1 * y1 << endl;
        if (y1 != 0) {
            cout << "Division: " << x1 / y1 << endl;
            cout << "Remainder: " << x1 % y1 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }

    // increment and decrement operations
    void incDec() {
        cout << "Prefix Increment: " << ++x1 << endl;
        cout << "Prefix Decrement: " << --x1 << endl;
        cout << "Postfix Increment: " << y1++ << endl;
        cout << "Postfix Decrement: " << y1-- << endl;
    }

    // relational operations
    void compare() {
        cout << "Greater than: " << (x1 > y1) << endl;
        cout << "Less than: " << (x1 < y1) << endl;
        cout << "Less than or equal to: " << (x1 <= y1) << endl;
        cout << "Greater than or equal to: " << (x1 >= y1) << endl;
    }

    // conditional operation
    void cond() {
        cout << "Logical Operator: " << (x1 > y1 ? x1 : y1) << endl;
    }

    // assignment operation
    void assign() {
        x1 = y1;
        cout << "Assignment Operator: " << x1 << endl;
    }

    // bitwise operation
    void bitwise() {
        cout << "Bitwise AND: " << (x1 & y1) << endl;
    }

    // logical operation
    void logical() {
        cout << "Logical AND: " << (x1 > y1 && y1 < x1) << endl;
    }
};

int main() {
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<endl;
    cout<<"enter the second number:";
    cin>>b;
    cout<<endl;
    Operation ops(a, b);
    ops.calc();
    ops.incDec();
    ops.compare();
    ops.cond();
    ops.assign();
    ops.bitwise();
    ops.logical();

    return 0;
}
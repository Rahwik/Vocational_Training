#include <iostream>
using namespace std;

class ZeroException {
public:
    string unexpected() {
        return "Division by zero is not allowed";
    }
};

int divide(int a, int b) {
    if (b == 0) {
        throw ZeroException();
    }
    return a / b;
}

int main() {
    int a, b;
    cout << "Enter the dividend: ";
    cin >> a;
    cout << "Enter the divisor: ";
    cin >> b;

    try {
        int result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch (ZeroException& e) {
        cout << "Caught exception: " << e.unexpected() << endl;
    }

    return 0;
}
//Convert Number to Binary: Write a function to convert a decimal number to binary.
#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary representation: " << decimalToBinary(decimal) << endl;
    return 0;
}
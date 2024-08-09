//Binary to Decimal Conversion: Convert a binary number to decimal. 
#include<iostream>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;

    for(int i = binary.length() - 1; i >= 0; i--) {
        if(binary[i] == '1')
            decimal += base;
        base = base * 2;
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "The decimal representation is: " << decimal << endl;

    return 0;
}
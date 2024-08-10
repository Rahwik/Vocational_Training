#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string revstr(string &str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Function to make a string a palindrome
string mPal(string &str) {
    string reversed = revstr(str);
    return str + reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string pal = mPal(input);
    cout << "The palindrome version of the string is: " << pal << endl;

    return 0;
}
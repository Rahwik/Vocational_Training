#include <iostream>
#include <string>

using namespace std;

void ccPairs(string str) {
    for (int i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            cout << "Consecutive pair found: " << str[i] << str[i + 1] << endl;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    ccPairs(input);

    return 0;
}
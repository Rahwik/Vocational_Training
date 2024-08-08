// Check for Automorphic Number: Determine if a number is automorphic.
// An automorphic number is an integer whose square ends with the given integer

#include <iostream>
using namespace std;

int countDigit(long long n) {
    string num = to_string(n);
    return num.length();
}

void automorphic(int n, int sqr, int d) {
    // Check if the square of the number ends with the given number
    int check = 0;
    int multiplier = 1;
    while (d != 0) {
        int d1 = sqr % 10;
        check = check + d1 * multiplier;
        sqr /= 10;
        multiplier *= 10;
        d--;
    }
    if (n == check) {
        cout << "It is an Automorphic number : " << n << endl;
    } else {
        cout << "It is not an Automorphic number : " << n << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int d = countDigit(n);
    int sqr = n * n;
    automorphic(n, sqr, d);
    return 0;
}
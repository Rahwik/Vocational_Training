//Check if Number is Strong: Check if a number is a strong number (sum of factorial of digits is equal to the number itself).
#include<iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to check if a number is strong
bool isStrong(int num) {
    int sum = 0;
    int temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrong(num))
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;

    return 0;
}
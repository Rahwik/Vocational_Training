//Check for Co-Prime: Determine if two numbers are co-prime. 
#include<iostream>
using namespace std;

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to check if two numbers are co-prime
bool areCoPrime(int a, int b) {
    // Two numbers are co-prime if their GCD is 1
    return gcd(a, b) == 1;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (areCoPrime(num1, num2))
        cout << num1 << " and " << num2 << " are co-prime." << endl;
    else
        cout << num1 << " and " << num2 << " are not co-prime." << endl;

    return 0;
}
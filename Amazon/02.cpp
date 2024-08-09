//LCM and GCD of Array: Find the LCM and GCD of an array of numbers. 
#include <iostream>
#include <numeric>

using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate GCD of an array of numbers
int gcdArray(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(result, arr[i]);
    return result;
}

// Function to calculate LCM of an array of numbers
int lcmArray(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = lcm(result, arr[i]);
    return result;
}

int main() {
    int arr[] = {2, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "GCD of array: " << gcdArray(arr, n) << endl;
    cout << "LCM of array: " << lcmArray(arr, n) << endl;

    return 0;
}
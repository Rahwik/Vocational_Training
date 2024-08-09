// Sum of Prime Numbers: Calculate the sum of all prime numbers up to N.
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Naive Solution:
void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

// Simple implementation of Sieve
void sieveSimple(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Optimized implementation of Sieve
void sieveOptimized(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Shorter implementation of the optimized Sieve
void sieveOptimized2(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " using Naive Solution:" << endl;
    printPrimes(n);

    cout << "Prime numbers up to " << n << " using Simple Sieve:" << endl;
    sieveSimple(n);

    cout << "Prime numbers up to " << n << " using Optimized Sieve:" << endl;
    sieveOptimized(n);

    cout << "Prime numbers up to " << n << " using Optimized Sieve 2:" << endl;
    sieveOptimized2(n);

    return 0;
}
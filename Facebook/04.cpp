#include <iostream>
#include <set>
using namespace std;

void primeFactors(int n) {
    set<int> distinctPrimes;

    if (n <= 1)
        return;

    while (n % 2 == 0) {
        distinctPrimes.insert(2);
        n = n / 2;
    }

    while (n % 3 == 0) {
        distinctPrimes.insert(3);
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            distinctPrimes.insert(i);
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            distinctPrimes.insert(i + 2);
            n = n / (i + 2);
        }
    }

    if (n > 3) {
        distinctPrimes.insert(n);
    }

    cout << "Number of distinct prime factors: " << distinctPrimes.size() << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    primeFactors(n);

    return 0;
}

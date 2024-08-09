// Factorial Digit Sum: Find the sum of the digits of the factorial of a number.
#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Function to calculate sum of digits
int sumDigits(int n)
{
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num += i;
        while (num >= 10)
        {
            int sum = 0;
            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
    }
    return num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = factorial(n);
    int sum = sumDigits(fact);
    cout << "Sum of digits of factorial: " << sum << endl;
    return 0;
}
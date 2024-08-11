// Smith Number Check: Check if a number is a Smith number (composite number where the sum of digits equals the sum of digits of its prime factors).
#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int primeFactorsSum(int n)
{
    int sum = 0;

    while (n % 2 == 0)
    {
        sum += sumOfDigits(2);
        n = n / 2;
    }

    while (n % 3 == 0)
    {
        sum += sumOfDigits(3);
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            sum += sumOfDigits(i);
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            sum += sumOfDigits(i + 2);
            n = n / (i + 2);
        }
    }

    if (n > 3)
    {
        sum += sumOfDigits(n);
    }

    return sum;
}

bool isSmithNumber(int n)
{
    if (isprime(n))
        return false;

    int sumDigits = sumOfDigits(n);
    int sumPrimeFactors = primeFactorsSum(n);

    return sumDigits == sumPrimeFactors;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isSmithNumber(n))
    {
        cout << n << " is a Smith number." << endl;
    }
    else
    {
        cout << n << " is not a Smith number." << endl;
    }

    return 0;
}

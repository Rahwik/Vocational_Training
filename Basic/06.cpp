//Next Prime Number: Given a number, find the next prime number greater than it.
#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
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

int nextPrime(int n)
{
    n++;
    while (!isprime(n))
    {
        n++;
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Next prime number is: " << nextPrime(n) << endl;

    return 0;
}
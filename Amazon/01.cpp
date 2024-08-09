// Sum of N Natural Numbers: Calculate the sum of the first N natural numbers.
#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = Sum(n);
    cout << "Sum of n natural numbers : " << sum << endl;
    return 0;
}
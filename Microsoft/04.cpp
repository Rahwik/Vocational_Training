// Check for Perfect Number: Determine if a number is a perfect number.
// A positive integer that equals the sum of its proper divisors, excluding itself.
#include <iostream>
using namespace std;

int perfectnum(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    int pernum = perfectnum(n);
    if (pernum == num)
    {
        cout << "It is a Perfect Number : " << pernum << endl;
    }
}
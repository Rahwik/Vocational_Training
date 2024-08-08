// Fibonacci Series Up to N: Generate the Fibonacci series up to N terms.
#include <iostream>
using namespace std;

void fibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Invalid input" << endl;
    }
    else if (n == 1)
    {
        cout << "Fibonacci number at position " << n << " is 0" << endl;
    }
    else if (n == 2)
    {
        cout << "Fibonacci number at position " << n << " is 1" << endl;
    }
    else
    {
        int a = 0, b = 1;
        for (int i = 3; i <= n; i++)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }
        cout << "Fibonacci number at position " << n << " is " << b << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fibonacci(i);
    }
    return 0;
}
//Factorial Calculation: Find the factorial of a number.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    long long factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
        cout << "Factorial of " << i << " = " << factorial << endl;
    }

    return 0;
}
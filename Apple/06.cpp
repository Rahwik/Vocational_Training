// Digit Count in Number: Count the number of digits in a given number.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digits in the number " << n << " is " << count;
    return 0;
}
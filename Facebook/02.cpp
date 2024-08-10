//Kaprekar Number Check: Determine if a number is a Kaprekar number.
#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int num)
{
    int sqr = num * num;
    int countDigits = 0;
    
    // Count the number of digits in the square
    int temp = sqr;
    while (temp > 0)
    {
        countDigits++;
        temp /= 10;
    }
    
    for (int i = 1; i < countDigits; i++)
    {
        int parts = pow(10, i);
        int sum = (sqr / parts) + (sqr % parts);
        
        if (sum == num && sqr % parts != 0)
        {
            return true;
        }
    }
    
    return (num == 1);  // 1 is a Kaprekar number
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isKaprekar(number))
    {
        cout << number << " is a Kaprekar number." << endl;
    }
    else
    {
        cout << number << " is not a Kaprekar number." << endl;
    }

    return 0;
}

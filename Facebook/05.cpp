//Digit Root Calculation: Calculate the digital root of a number. 
#include <iostream>
using namespace std;

int addDigits(int n)
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

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = addDigits(number);
    cout << "The resulting single digit is: " << result << endl;

    return 0;
}
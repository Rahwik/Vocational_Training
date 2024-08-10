// Magic Number Check: Check if a number is a magic number.
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
    if (result == 1)
    {
        cout << "The resulting single digit is Magic Number : " << result << endl;
    }
    else
    {
        cout << "The resulting single digit is not a Magic Number" << endl;
    }
    return 0;
}
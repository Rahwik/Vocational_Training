//Happy Number Check: Check if a number is a happy number.
// If it yields 1 when replaced by the sum of squares of its digits repeatedly.
#include <iostream>
using namespace std;

int addDigits(int n)
{
    int num = n;
    while (num != 1 && num != 4)
    {
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = addDigits(number);

    if(result==1){
        cout << "The resulting number is a Happy Number : " << number << endl;
    } else {
        cout << "The resulting number is not a Happy Number : " << number << endl;
    }

    return 0;
}
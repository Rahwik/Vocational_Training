// Check for Abundant Number: Determine if a number is an abundant number.
#include <iostream>

using namespace std;

int factors(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number to check for abundant number : " << endl;
    cin >> n;
    int sum = factors(n);
    if(sum>n)
    {
        cout<<"It is an Abundant number : "<<endl;
    }
    else{
        cout<<"It is not an Abundant number : "<<endl;
    }
    return 0;
}
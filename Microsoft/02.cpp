// Armstrong Number: Check if a number is an Armstrong number.
// A number that is equal to the sum of cubes
#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int operation(int n)
{
    int sum,d;
    while (n != 0)
    {
        d = n % 10;
        sum = sum + cube(d);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n,arms;
    cout << "Enter a number to check for armstrong number:" << endl;
    cin >> n;
    arms = operation(n);
    if(n==arms){
    cout <<"It is a Armstrong number"<< endl;
    }else{
    cout <<"It is not a  Armstrong number"<< endl;
    }
    return 0;
}

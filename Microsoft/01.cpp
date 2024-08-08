//Reverse Digits: Reverse the digits of a number. 
#include<iostream>
using namespace std;
int reverse(int n)
{
    int d,rev;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = reverse(n);
    cout<<"Reverse of "<<n<<" is "<<rev<<endl;
    return 0;
}
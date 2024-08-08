//Check for Palindrome Number: Check if a number is a palindrome. 
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
    if(n=rev){
    cout<<"Number : "<<n<<" is palindrome"<<endl;
    }
    else{
          cout<<"Number :"<<n<<" is not a palindrome"<<endl;
    }
    return 0;
}
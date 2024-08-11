//Sum of Squares of Digits: Calculate the sum of the squares of the digits of a number. 
#include<iostream>
using namespace std;
int main()
{
    int n,d;
    int sum=0;
    cout<<"enter the number to add the digits"<<endl;
    cin>>n;
    if(n>=0){
    while(n!=0)
    {
        d=n%10;
        sum=sum+(d*d);
        n= n/10;

    }
    cout<<"sum of the digits of the number: "<<sum<<endl;
    }
    else{
        cout<<"enter a positive natural number."<<endl;
    }
    return 0;
}
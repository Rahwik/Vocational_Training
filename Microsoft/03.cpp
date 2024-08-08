//Sum of Proper Divisors: Find the sum of proper divisors of a number.
#include<iostream>
using namespace std;
int factors(int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
      if(n%i==0){
        sum=sum+i;
      }
      i++;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter the number to find the perfect divisors sum : "<<endl;
    cin>>n;
    int sum=0;
    sum = factors(n);
    cout<<"sum of perfect divisors : "<<sum<<endl;
    return 0;
}
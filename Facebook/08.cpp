// HCF of Array: Find the highest common factor (HCF) of an array of numbers. 
#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a % b);
    }
}

/*
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
*/
int gcd1(int a, int b)
{
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a = 12;
    int b = 15;
    int firstgcd = gcd(a, b);
    int secondgcd = gcd1(a,b);
    cout<<"GCD from first function is : "<<firstgcd<<endl;
    cout<<"GCD from Second function is : "<<secondgcd<<endl;
    return 0;
}

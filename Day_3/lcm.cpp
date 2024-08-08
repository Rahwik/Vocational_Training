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
int Lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a = 12;
    int b = 15;
    int lcm = Lcm(a,b);
    cout<<"LCM is : "<<lcm<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a;
    cin>>b;
    //using a temporary variable
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swap a: "<<a<<endl;
    cout<<"after swap b: "<<b<<endl;
    //without using temporary variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap a: "<<a<<endl;
    cout<<"after swap b: "<<b<<endl;
    // XOR swap algorithm
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"after swap a: "<<a<<endl;
    cout<<"after swap b: "<<b<<endl;
    return 0;
}

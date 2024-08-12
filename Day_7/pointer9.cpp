#include<iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    cout<<p++<<endl;
    cout<<p--<<endl;
    cout<<*p++<<endl;
    cout<<*p--<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p-1)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p-5)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a;
    cin>>b;
    cout<<"a value :"<<a<<endl;
    cout<<"b value :"<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a updated value :"<<a<<endl;
    cout<<"b updated value :"<<b<<endl;
    return 0;
}
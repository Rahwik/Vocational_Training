#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"enter the nth value"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum of n natural numbers: "<<sum<<endl;
    return 0;
}
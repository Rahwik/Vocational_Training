//Nth Fibonacci Number: Find the Nth Fibonacci number.
#include<iostream.
using namespace std;

int main()
{
    int n;
    cout<<"Enter the position of the Fibonacci number you want to find: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Invalid input"<<endl;
    }
    else if(n==1){
        cout<<"Fibonacci number at position "<<n<<" is 0"<<endl;
    }
    else if(n==2){
        cout<<"Fibonacci number at position "<<n<<" is 1"<<endl;
        }
        else{
            int a=0,b=1;
            for(int i=3;i<=n;i++){
                int temp=a+b;
                a=b;
                b=temp;
                }
                cout<<"Fibonacci number at position "<<n<<" is "<<b<<endl;
                }
                return 0;
}
//Prime Factorization: Perform prime factorization of a number. 
#include<iostream>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 ==0|| n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i+=6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

//Naive solution:
void primefactor(int n)
{
 for(int i=2;i<n;i++)
 {
    if (isprime(i))
    {
        int x=i;
    
    while(n%x==0)
    {
        cout<<i<<endl;
        x=x*i;
    }
 }
}
}

void Primefactor(int n)
{
    if(n<=1)
    {
        return ;
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
    }
    if(n>1)
    {
        cout<<n<<endl;
    }
}

/// Most Efficient Solution:
void primefactors(int n)
{
    int i;
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << endl;
        n = n / 3;
    }
    for (i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    while (n % (i + 2) == 0)
    {
        cout << (i + 2) << endl;
        n = n / (i + 2);
    }
    if (n > 3)
    {
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Using Naive Method:\n";
    primefactor(n);

    cout << "Using Efficient Method:\n";
    Primefactor(n);

    cout << "Using Most Efficient Method:\n";
    primefactors(n);

    return 0;
}
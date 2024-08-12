#include<iostream>
using namespace std;

int increment(int a)
{
    return a + 1;
}

int main()
{
    int (*fp)(int);
    fp = increment;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Incremented number: " << (*fp)(num) << endl;
}
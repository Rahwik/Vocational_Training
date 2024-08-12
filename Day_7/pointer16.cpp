#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*fp)(int, int);
    fp = add;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << (*fp)(num1, num2) << endl;
}
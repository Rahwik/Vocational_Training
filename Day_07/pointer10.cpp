#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int arr[5];

    arr[0] = a + b;
    arr[1] = a - b;
    arr[2] = a * b;
    arr[3] = a / b;
    arr[4] = a % b;

    int *p = arr;

    cout << "Results of arithmetic operations: " << endl;
    cout << "a + b = " << *(p) << endl;
    cout << "a - b = " << *(p+1) << endl;
    cout << "a * b = " << *(p+2) << endl;
    cout << "a / b = " << *(p+3) << endl;
    cout << "a % b = " << *(p+4) << endl;

    return 0;
}
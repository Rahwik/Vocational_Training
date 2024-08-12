#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter the two numbers to perform the Arithmetic operations: " << endl;
    cin >> a >> b;

    int *pa = &a;
    int *pb = &b;

    int sum = *pa + *pb;
    cout << "Sum: " << sum << endl;

    int diff = *pa - *pb;
    cout << "Difference: " << diff << endl;

    int product = *pa * *pb;
    cout << "Product: " << product << endl;

    if (*pb != 0)
    {
        int quotient = *pa / *pb;
        cout << "Quotient: " << quotient << endl;

        int remainder = *pa % *pb;
        cout << "Remainder: " << remainder << endl;
    }

    if (*pa > *pb)
    {
        cout << "First number is greater : " << a << endl;
    }
    else
    {
        cout << "Second number is greater : " << b << endl;
    }

    int *max = *pa > *pb ? pa : pb;
    cout << "Maximum number is : " << *max << endl;

    cout << "increment of First value : " << ++*pa << endl;
    cout << "increment of Second value : " << ++*pb << endl;
    cout << "decrement of First value : " << --*pa << endl;
    cout << "decrement of Second value : " << --*pb << endl;

    cout << "increment of First value : " << *pa++ << endl;
    cout << "increment of Second value : " << *pb++ << endl;
    cout << "decrement of First value : " << *pa-- << endl;
    cout << "decrement of Second value : " << *pb-- << endl;

    return 0;
}
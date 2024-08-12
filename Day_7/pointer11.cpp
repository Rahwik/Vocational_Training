#include <iostream>
using namespace std;

int main()
{
    int a, b;

    int *ptra = &a;
    int *ptrb = &b;
    cout << "Enter two integers: ";
    cin >> *ptra >> *ptrb;
    int arr[2] = {*ptra, *ptrb};

    int sum = arr[0] + arr[1];
    int diff = arr[0] - arr[1];
    int product = arr[0] * arr[1];

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;

    if (arr[1] != 0)
    {
        double quotient = double(arr[0]) / arr[1];
        int remainder = arr[0] % arr[1];
        cout << "Quotient: " << quotient << endl;
        cout << "Remainder: " << remainder << endl;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
    }

    int gr = (arr[0] > arr[1]) ? arr[0] : arr[1];
    cout << "Greater number: " << gr << endl;

    cout << "Prefix increment arr[0]: " << ++arr[0] << endl;
    cout << "Prefix increment arr[1]: " << ++arr[1] << endl;
    cout << "Prefix decrement arr[0]: " << --arr[0] << endl;
    cout << "Prefix decrement arr[1]: " << --arr[1] << endl;

    return 0;
}
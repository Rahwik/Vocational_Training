#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter the two numbers to compare : " << endl;
    cin >> a;
    cin >> b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    if (*ptr1 > *ptr2)
    {
        cout << "First is greater :" << a << endl;
    }
    else if (*ptr1 < *ptr2)
    {
        cout << "Second is greater : " << b << endl;
    }
    else
    {
        cout << "Both are equal : " << a << endl;
    }

    return 0;
}
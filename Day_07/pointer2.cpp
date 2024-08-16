#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* ptr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    cout << "Elements entered by user: ";
    for (int i = 0; i < n; i++)
    {
        cout << "Element at " << i << " : " << ptr[i] << endl;
    }

    delete[] ptr;
    ptr = nullptr;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << " element at " << i << " : " << ptr[i] << endl;
        sum = sum + ptr[i];
    }
    cout << "sum of the array elements using the pointer : " << sum << endl;

    delete[] ptr;
    ptr = nullptr;
    return 0;
}
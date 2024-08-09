// Right rotate an array by d places
#include<iostream>
using namespace std;

void rightrotateone(int arr[], int n)
{
    int temp = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

void rightrotate(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++)
    {
        rightrotateone(arr, n);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rightrotate(arr, n, d);

    cout << "Array after right rotation by " << d << " positions: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
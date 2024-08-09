#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Sum of the array elements: ";
    int sum=0;
    for (int i = 0; i < size; i++) {
        sum=sum+arr[i];
    }
    cout << sum << " ";
    cout << endl;

    return 0;
}
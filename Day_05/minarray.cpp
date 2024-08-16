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

    cout << "Minimum element of the array: ";
    int MIN = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < MIN) {
            MIN = arr[i];
        }
    }
    cout << MIN << endl;

    return 0;
}
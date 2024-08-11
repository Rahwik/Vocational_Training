// Multiplicative Persistence: Find the number of times the digits of a number must be multiplied together until a single digit is obtained.
/*
Input: arr[] = {39, 999, 4, 9876}
Output: 4 9876 39 999
Explanation:
Following are the number of steps required to reduce every array element to 0:

For arr[0] (= 39): The element 39 will reduce as 39 ? 27 ? 14 ? 4. Therefore, the number of steps required is 3.
For arr[1] (= 999): The element 999 will reduce as 999 ? 729 ? 126 ? 12 ? 2. Therefore, the number of steps required is 4.
For arr[2] (= 4): The element 4 is already a single-digit number. Therefore, the number of steps required is 0.
For arr[3] (= 9876): The element 9876 will reduce as 9876 ? 3024 ? 0. Therefore, the number of steps required is 2.
According to the given criteria the elements in increasing order of count of steps required to reduce them into single-digit number is {4, 9876, 29, 999}

Input: arr[] = {1, 27, 90}
Output: 1 90 27 */
#include <iostream>
using namespace std;

// Function to calculate the multiplicative persistence of a number
int add(int n)
{
    int steps = 0;
    while (n >= 10)
    {
        int product = 1;
        while (n > 0)
        {
            product *= (n % 10);
            n /= 10;
        }
        n = product;
        steps++;
    }
    return steps;
}

void arrper(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (add(arr[i]) > add(arr[j]))
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number at index " << i << ": ";
        cin >> arr[i];
    }

    arrper(arr, size);

    cout << "Array sorted by multiplicative persistence: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

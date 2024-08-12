#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int *ptra = &a;
    int *ptrb = &b;
    int arr[2] = {*ptra, *ptrb};
    int results[2][4];
    int arr1[4] = {0, 0, 1, 1};

    for (int i = 0; i < 2; i++)
    {
        int temp = arr1[0];
        temp = temp + arr[i];
        results[i][0] = temp;

        temp = arr1[0];
        temp = temp - arr[i];
        results[i][1] = temp;

        if (arr[i] != 0)
        {
            temp = arr1[0];
            temp = temp / arr[i];
            results[i][2] = temp;
        }
        else
        {
            results[i][2] = 0;
        }

        temp = arr1[0];
        temp = temp * arr[i];
        results[i][3] = temp;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Results for input " << arr[i] << ":" << endl;
        cout << "Addition: " << results[i][0] << endl;
        cout << "Subtraction: " << results[i][1] << endl;
        cout << "Multiplication: " << results[i][3] << endl;
        cout << endl;
    }

    return 0;
}
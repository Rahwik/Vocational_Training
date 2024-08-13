#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res = res + (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water that can be trapped is " << getWater(arr, n);
    return 0;
}
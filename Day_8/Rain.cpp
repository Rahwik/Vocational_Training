#include <vector>
#include <algorithm>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        res = res + (min(lmax, rmax) - arr[i]);
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
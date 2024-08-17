#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> inter(vector<int> &a, vector<int> &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> res;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return res;
}

int main()
{
    vector<int> a = {1, 2, 2, 1, 3};
    vector<int> b = {2, 2, 3};

    vector<int> res = inter(a, b);

    for (int n : res)
    {
        cout << n << " ";
    }

    return 0;
}

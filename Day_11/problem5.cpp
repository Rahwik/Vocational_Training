#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> inter(vector<int> &a, vector<int> &b)
{
    map<int, int> count;
    for (int num : a)
    {
        count[num]++;
    }

    vector<int> res;
    for (int num : b)
    {
        if (count[num] > 0)
        {
            res.push_back(num);
            count[num]--;
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

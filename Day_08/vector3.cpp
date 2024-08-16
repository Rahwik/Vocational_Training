#include <iostream>
#include <vector>

using namespace std;

bool dup(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                return true;
            }
        }
    }
    return false;
}

vector<int> remv(vector<int> v)
{
    vector<int> result;
    for (int i = 0; i < v.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < result.size(); j++)
        {
            if (v[i] == result[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (dup(v))
    {
        cout << "Duplicates found. Removing duplicates..." << endl;
        v = remv(v);
    }

    cout << "The unique numbers are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

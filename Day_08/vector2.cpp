#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool dup(vector<int> v)
{
    sort(v.begin(), v.end());
    return unique(v.begin(), v.end()) != v.end();
}

vector<int> remv(vector<int> v)
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
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
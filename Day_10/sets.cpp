#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    for(int x : s)
        cout << x << " ";
    cout << endl;

    return 0;
}
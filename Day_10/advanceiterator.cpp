#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    auto it = v.begin();
    advance(it, 2);
    cout << "After advancing 2 steps: " << *it << endl;

    it = next(it, 1);
    cout << "After moving 1 step forward: " << *it << endl;

    it = prev(it, 2);
    cout << "After moving 2 steps backward: " << *it << endl;
    
    advance(it, -2);
    cout << "After moving 2 steps backward: " << *it << endl;

    return 0;
}
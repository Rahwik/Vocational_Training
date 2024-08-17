#include <list>
#include <iostream>

using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);

    for (auto i : l) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
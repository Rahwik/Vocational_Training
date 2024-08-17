#include <list>
#include <iostream>

using namespace std;

int main()
{
    list<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    cout << "Initial list: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    a.push_front(0);

    cout << "After push_front: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    auto b = a.begin();
    b++;
    a.erase(b);
    cout << "After erase: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    a.remove(2);
    cout << "After remove: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    a.sort();
    cout << "After sort: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    
    a.pop_front();
    cout << "After pop_front: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    a.pop_back();
    cout << "After pop_back: ";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<int, string> Mapm;

    Mapm.insert_or_assign(1, "Rahul");
    Mapm.insert_or_assign(2, "Prasad");
    Mapm.insert_or_assign(3, "Anwik");
    Mapm.insert_or_assign(4, "Yash");
    Mapm.insert_or_assign(5, "Hammy");

    cout << "Enter the key value to erase:" << endl;

    int key;
    cin >> key;

    if (key > 0)
    {
        Mapm.erase(key);
        cout << "Value erased successfully." << endl;
    }
    else
    {
        cout << "Key not found." << endl;
    }

    cout << "Remaining values:" << endl;
    map<int, string>::iterator it = Mapm.begin();
    for (it; it != Mapm.end(); ++it)
    {
        cout << "ID: " << it->first << ", Name: " << it->second << endl;
    }

    return 0;
}
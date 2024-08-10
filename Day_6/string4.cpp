#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello world is a very common string in programming";
    string substring = "common";

    int pos = str.find(substring);

    if (pos >= 0)
    {
        cout << "Substring found at position: " << pos << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }

    return 0;
}

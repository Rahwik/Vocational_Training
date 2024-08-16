#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";
    cout << str << endl;
    str.append(" how are you");
    cout << str << endl;
    str.replace(0, 5, "hi!");
    cout << str << endl;
    string erased = str;
    erased.erase(0, 4);
    cout << erased << endl;
    return 0;
}

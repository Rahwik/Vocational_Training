#include <iostream>
#include <string>
using namespace std;
string swapChars(string str, int pos1, int pos2)
{
    char temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;
    return str;
}

int main()
{
    string str = "hello";
    int pos1 = 1;
    int pos2 = 2;

    cout << "Original string: " << str << endl;
    string str1 = swapChars(str, pos1, pos2);
    cout << "Swapped string: " << str1 << endl;

    return 0;
}

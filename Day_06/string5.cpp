#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int pos, len;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Enter the position and length to extract the substring:" << endl;
    cin >> pos;
    cin >> len;
    string substring = str.substr(pos, len);
    cout << "Extracted substring: " << substring << endl;
    return 0;
}
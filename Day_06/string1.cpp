#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the String: " << endl;
    string str;
    cin >> str;

    cout << "Enter the number of elements in the array: " << endl;
    int n;
    cin >> n;
    
    //str.erase(5,6);

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assuming you want to print a substring
    cout << "Enter the starting index of the substring: " << endl;
    int start;
    cin >> start;

    cout << "Enter the length of the substring: " << endl;
    int len;
    cin >> len;

    string substr = str.substr(start, len);
    cout << "Substring: " << substr << endl;

    return 0;
}
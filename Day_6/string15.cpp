#include<iostream>
#include<string> 
using namespace std; 

bool isPal(string &str){
    int begin = 0;
    int end = str.length() - 1;
    while(begin < end){
        if(str[begin] != str[end])
             return false; 
         begin++;
         end--;
    }
    return true;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if(isPal(input))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    // Destroy the palindrome
    input += 's';
    cout << "Modified string: " << input << endl;
    if(isPal(input))
        cout << "The modified string is a palindrome." << endl;
    else
        cout << "The modified string is not a palindrome." << endl;

    return 0;
}
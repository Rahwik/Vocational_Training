#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="hello this is the new world to dominate";
    string str1 = str;
    str1.replace(0, 5, "Begone");
    cout<<str<<endl;
    cout<<str1<<endl;
    return 0;
}
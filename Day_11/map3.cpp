#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<string, int> Grade;
    Grade["A"] = 25;
    Grade["B"] = 30;
    Grade["C"] = 35;

    cout << "Grade A " << Grade["A"] << endl;
    cout << "Grade B " << Grade["B"] << endl;
    cout << "Grade C " << Grade["C"] << endl;


    return 0;
}
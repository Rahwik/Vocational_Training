/*A pointer is avariable that stores the memory address of another variable.
Pointers are powerful tools in c++ that enables direct memory access and manipulation which can lead to efficient and flexible code.

#Uses : Pointers are require to careful handling to avoid errors such as memory leaks or segementation faults .
"*" : this is a derefence operator.
"&" : this is a ampersand operator.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int *ptr;

    ptr = &a;

    cout << "Value of var variable: ";
    cout << a << endl;

    cout << "Address stored in ptr variable: ";
    cout << ptr << endl;

    cout << "Value of *ptr variable: ";
    cout << *ptr << endl;

    return 0;
}
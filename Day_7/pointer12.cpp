#include <iostream>

using namespace std;

int main() {
    int var = 20; 
    int *ptr; 
    int **pptr; 

    ptr = &var; 
    pptr = &ptr; 

    cout << "Value of var variable: " << var << endl;

    cout << "Address stored in ptr variable: " << ptr << endl;

    cout << "Value of *ptr variable: " << *ptr << endl;

    cout << "Address stored in pptr variable: " << pptr << endl;

    cout << "Value of **pptr variable: " << **pptr << endl;

    return 0;
}
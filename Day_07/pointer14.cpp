#include <iostream>
using namespace std;

void triple(int **ptr)
{
    **ptr *= 3;
}

int main()
{
    int num;
    cout << "enter the number to find the triple value : ";
    cin >> num;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout << "Before tripling: " << num << endl;
    triple(ptr2);
    cout << "After tripling: " << num << endl;

    return 0;
}

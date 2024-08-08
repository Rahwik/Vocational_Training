//Implementation of function template
#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    //calling a function template.
    int c = myMax<int>(10, 5);
    float d = myMax<float>(10.5f, 15.6f);

    cout << "Max of 10 and 5: " << c << endl;
    cout << "Max of 10.5 and 15.6: " << d << endl;

    return 0;
}

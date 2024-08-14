#include <iostream>
using namespace std;
template <class T>
class Test
{
private:
    T answer;

public:
    Test(T n) : answer(n)
    {
        cout << "Inside constructor" << endl;
    }

    T getNumber()
    {
        return answer;
    }
};
int main()
{
    Test<int> numI(60);
    Test<double> numD(17.27);
    cout << "Integer Number is: " << numI.getNumber() << endl;
    cout << "Double Number = " << numD.getNumber() << endl;
    return 0;
}
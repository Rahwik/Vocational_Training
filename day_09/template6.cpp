#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1;
    T num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {};

    T add()
    {
        return num1 + num2;
    }

    T sub()
    {
        return num1 - num2;
    }

    T multi()
    {
        return num1 * num2;
    }

    T div()
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator<int> num1(10, 2);
    Calculator<double> num2(10.5, 2.0);

    cout << "Integer Addition: " << num1.add() << endl;
    cout << "Integer Subtraction: " << num1.sub() << endl;
    cout << "Integer Multiplication: " << num1.multi() << endl;
    cout << "Integer Division: " << num1.div() << endl;

    cout << "Double Addition: " << num2.add() << endl;
    cout << "Double Subtraction: " << num2.sub() << endl;
    cout << "Double Multiplication: " << num2.multi() << endl;
    cout << "Double Division: " << num2.div() << endl;

    return 0;
}
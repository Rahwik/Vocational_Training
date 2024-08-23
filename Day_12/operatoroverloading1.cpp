#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(3, 7);
    complex c2(4, 9);
    complex c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}

/*
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // Overloaded - operator function
    complex operator-(complex x)
    {
        complex temp;
        temp.real = real - x.real;
        temp.img = img - x.img;
        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(10, 5);
    complex c2(4, 3);
    complex c3;

    c3 = c1 - c2;  // Subtracting c2 from c1

    c3.display();  // Displays 6 + 2i

    return 0;
}

//
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // Overloaded * operator function
    complex operator*(complex x)
    {
        complex temp;
        temp.real = real * x.real - img * x.img;
        temp.img = real * x.img + img * x.real;
        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(4, 5);
    complex c3;

    c3 = c1 * c2;  // Multiplying c1 by c2

    c3.display();  // Displays -7 + 22i

    return 0;
}

//
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // Overloaded == operator function
    bool operator==(complex x)
    {
        return (real == x.real && img == x.img);
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(2, 3);
    complex c3(4, 5);

    if (c1 == c2)  // Comparing c1 and c2
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    if (c1 == c3)  // Comparing c1 and c3
        cout << "c1 and c3 are equal" << endl;
    else
        cout << "c1 and c3 are not equal" << endl;

    return 0;
}

*/
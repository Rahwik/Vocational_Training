// basic arithmetic operators
#include <iostream>

int main()
{
    int a = 10, b = 5;
    std::cout << a + b << std::endl; // addition
    std::cout << a - b << std::endl; // subtraction
    std::cout << a * b << std::endl; // product
    std::cout << a / b << std::endl; // division
    std::cout << a % b << std::endl; // remainder
    std::cout << ++a << std::endl; // prefix increment
    std::cout << --a << std::endl; // prefix decrement
    std::cout << b++ << std::endl; // postfix increment
    std::cout << b-- << std::endl; // postfix decrement
    return 0;
}


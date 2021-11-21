#include <iostream>

template <typename type>

type swap(type a, type b)
{
    type temp;
    temp = a;
    a = b;
    b = temp;
    return a, b;
}

int main()
{
    int a = 5, b = 7;
    std::cout << a << " - " << b << std::endl;
    a, b = swap(a, b);
    std::cout << a << " - " << b << std::endl;

    char c = 'c', d = 'd';
    std::cout << c << " - " << d << std::endl;
    c, d = swap(c, d);
    std::cout << c << " - " << d << std::endl;
}
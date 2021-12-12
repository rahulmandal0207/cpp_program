#include <iostream>

using namespace std;

int main()
{
    printf("Hello world from Printf()\n");
    std::cout << "Hello world!";
    std::cin.get();

    int a = 5;
    int b = 6;
    if(a > b)
        std::cout << a << endl;

    std::cout << a + b << endl;
    std::cin.get();
    return 0;
}
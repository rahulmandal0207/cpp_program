#include <iostream>
#include <conio.h>

using namespace std;

class A
{
public:
    void funA()
    {
        cout << "Function of A \n";
    }
};

class B
{
public:
    void funB()
    {
        cout << "Function of B \n";
    }
};

class C : public A, public B
{
public:
    void funC()
    {
        cout << "Function of C \n";
    }
};

int main()
{
    C c;

    c.funA();
    c.funB();
    c.funC();

    getch();
    return 0;
}
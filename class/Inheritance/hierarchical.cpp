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

class B : public A
{
public:
    void funB()
    {
        cout << "Function of B \n";
    }
};

class C : public A
{
public:
    void funC()
    {
        cout << "Function of C \n";
    }
};

int main()
{
    B b;
    C c;

    b.funA();
    b.funB();

    c.funA();
    c.funC();

    getch();
    return 0;
}
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

class D : public C
{
public:
    void funD()
    {
        cout << "Function of D \n";
    }
};

class E : public C
{
public:
    void funE()
    {
        cout << "Function of E \n";
    }
};

int main()
{
    D d;
    d.funA();
    d.funB();
    d.funC();
    d.funD();

    E e;
    e.funA();
    e.funB();
    e.funC();
    e.funE();

    getch();
    return 0;
}

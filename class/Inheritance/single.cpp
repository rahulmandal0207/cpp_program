#include <iostream>
using namespace std;

class A
{
public:
    void funA()
    {
        cout << "Function of A \n";
    }
};

class B : public A  // inheriting all the public members of A
{
public:
    void funB()
    {
        cout << "Function of B \n";
    }
};

int main()
{
    B b;
    b.funB();
    b.funA();
    return 0;
}



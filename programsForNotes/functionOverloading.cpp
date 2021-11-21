#include <iostream>
using namespace std;

class MyClass
{
public:
    void func(int x) // function with 1 int parameter
    {
        cout << "value of x is " << x << endl;
    }

    void func(double x) // function with same name but 1 double parameter
    {
        cout << "value of x is " << x << endl;
    }

    void func(int x, int y) // function with same name and 2 int parameters
    {
        cout << "value of x is " << x << " and value of y is " << y << endl;
    }
};

int main()
{
    MyClass obj;

    obj.func(5);
    obj.func(3.14);
    obj.func(74, 54);

    return 0;
}
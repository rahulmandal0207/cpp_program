#include <iostream>
using namespace std;

class MyClass
{
public:    // Public access specifier
    int x; // Public attribute
private:   // Private access specifier
    int y; // Private attribute
};

int main()
{
    MyClass myObj;
    myObj.x = 25; // Allowed (public x)
    myObj.y = 50; // ERROR! Not allowed (private y)
    return 0;
}



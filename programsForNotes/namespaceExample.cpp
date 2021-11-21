#include <iostream>
using namespace std;

namespace First
{
    void sayHello()
    {
        cout << "Hello from first namespace\n";
    }
}

namespace Second
{
    void sayHello()
    {
        cout << "Hello from second namespace\n";
    }
}

int main()
{
    First::sayHello();  // calls the function from first name space
    Second::sayHello(); // calls the function from second name space

    return 0;
}
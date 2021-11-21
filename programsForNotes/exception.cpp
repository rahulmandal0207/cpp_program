#include <iostream>
using namespace std;

double division(int x, int y)
{
    if (y == 0)
    {
        throw "Attempted to divide by zero";
    }
    return (x / y);
}

int main()
{
    int x = 20;
    int y = 0;
    double z = 0;

    try  {
        z = division(x, y);
        cout << z << endl;
    } catch (const char *msz) {
        cout << msz << endl;
    }

    return 0;
}
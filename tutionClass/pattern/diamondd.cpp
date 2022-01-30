
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int r, c, a;
    for (r = 1; r <= 3; r += 1)
    {
        for (c = 3; c >= r; c -= 1)
        {
            cout << "  ";
        }
        for (a = 1; a <= 2 * r - 1; a += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (r = 1; r <= 2; r += 1)
    {
        for (c = 1; c <= r + 1; c += 1)
        {
            cout << "  ";
        }
        for (a = 3; a >= 2 * r - 1; a -= 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
    return 0;
}

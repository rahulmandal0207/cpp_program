#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int r, c, a;
    for (r = 1; r <= 4; r += 1)
    {
        for (c = 4; c >= r; c -= 1)
        {
            cout << " ";
        }
        for (a = 1; a <= r; a += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (r = 1; r <= 3; r += 1)
    {
        for (c = 1; c <= r + 1; c += 1)
        {
            cout << " ";
        }
        for (a = 3; a >= r; a -= 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    getch();
    return 0;
}
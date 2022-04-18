#include <iostream>
#include <conio.h>

#define R 5

using namespace std;

int main()
{
    int r;
    int c;
    int s;
    int num;

    for (r = 0; r < R; r++)
    {
        for (s = (2 * R - 1); s >= (2 * r - 1); s--)
        {
            cout << " ";
        }
        num = 1;
        cout << num << "   ";
        for (c = 1; c <= r; c++)
        {
            num = num * (r - c + 1) / c;
            cout << num << "   ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}

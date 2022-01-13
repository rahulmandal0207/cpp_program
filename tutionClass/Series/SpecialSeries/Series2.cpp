// Series 2
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, y;
    for (x = 1; x <= 10; x++)
    {
        for (y = 1; y <= 10; y++)
        {
            cout << x * y << "\t";
        }
        cout << endl;
    }
    getch();
    return 0;
}
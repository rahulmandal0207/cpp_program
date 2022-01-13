// Series 1
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x, y;

    x=1;
    do
    {
        y = 1;
        do
        {
            cout << x * y << "\t";
            y += 1;
        } while (y <= 12);
        cout << endl;
        x++;
    } while (x <= 10);
    getch();
    return 0;
}
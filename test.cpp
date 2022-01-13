#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int r, c;
    int i = 1;
    int j;
    while (1)
    {
        for (r = 1; r < 10; r++)
        {
            for (j = r; j <= 10; j++)
            {
                cout << char(32);
            }
            for (c = 1; c < 10; c++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        i++;
        system("cls");
    }
    return 0;
}
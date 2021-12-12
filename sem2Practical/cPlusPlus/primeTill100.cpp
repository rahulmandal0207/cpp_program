#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i = 0;
    int j;
    while (i <= 100)
    {
        for (j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout << i << " ";
        }
        i++;
    }

    getch();
    return 0;
}
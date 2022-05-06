// Array of names

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

#define R 2  // number of names
#define C 20 // number of characters in each name

int main()
{
    char names[R][C];
    int i, j;

    cout << "Enter names : ";
    for (i = 0; i < R; i++)
    {
        gets(names[i]);
    }
    for (i = 0; i < R; i++)
    {
        j = 0;
        while (names[i][j] != '\0')
        {
            cout << names[i][j];
            j++;
        }
        cout << endl;
    }

    getch();
    return 0;
}
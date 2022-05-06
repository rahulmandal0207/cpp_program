#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char str[10];
    char *ptr = str;
    int i, j, s;

    cout << "Enter your text : ";
    gets(str);

    for (i = 0; i < 10; i++)
    {
        for (s = 0; s < i; s++)
        {
            cout << " ";
        }
        for (j = i; j < 10; j++)
        {
            cout << *(ptr + j);
        }
        cout << endl;
    }

    getch();
    return 0;
}
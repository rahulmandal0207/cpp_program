#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int dec;
    int oct[50];
    int i = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        oct[i++] = dec % 8;
        dec /= 8;
    }

    cout << "Octal : ";
    for (--i; i >= 0; i--)
    {
        cout << oct[i];
    }

    getch();
}
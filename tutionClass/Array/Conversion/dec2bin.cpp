#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int dec;
    int bin[50];
    int i = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        bin[i++] = dec % 2;
        dec /= 2;
    }

    cout << "Binary : ";
    for (--i; i >= 0; i--)
        cout << bin[i];

    getch();
}
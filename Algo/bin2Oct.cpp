#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int bin;
    int oct[10];
    int rem;
    int i = 0;

    cout << "Enter a binary number : ";
    cin >> bin;

    while (bin > 0)
    {
        rem = bin % 1000;
        oct[i] = rem;
        bin /= 1000;
        i++;
    }

    cout << "Octal : ";
    for (--i; i >= 0; i--)
    {
        cout << oct[i];
    }

    getch();
    return 0;
}
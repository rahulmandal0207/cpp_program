#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int bin;
    char hexVal[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[10];
    int rem;
    int i = 0;

    cout << "Enter binary number : ";
    cin >> bin;

    while (bin > 0)
    {
        rem = bin % 10000;
        hex[i] = hexVal[rem];
        bin /= 10000;
        i++;
    }

    cout << "Hexadecimal : ";
    for(--i; i>=0; i--)
    {
        cout << hex[i];
    }

    getch();
    return 0;
}
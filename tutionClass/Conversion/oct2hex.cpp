#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int oct;
    int dec;
    int rem;
    int i = 0;
    char hexValue[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[50];

    cout << "Enter a octal number : ";
    cin >> oct;

    while (oct > 0)
    {
        rem = oct % 10;
        dec += rem * pow(8, i);
        oct /= 10;
        i++;
    }

    cout << "Decimal : " << dec;

    i = 0;
    while (dec > 0)
    {
        rem = dec % 16;
        hex[i] = hexValue[rem];
        dec /= 16;
        i++;
    }

    cout << "\nHexadecimal : ";
    for (--i; i >= 0; i--)
        cout << hex[i];

    getch();
    return 0;
}
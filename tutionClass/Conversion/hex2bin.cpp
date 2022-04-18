#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    char hex[10];
    char hexVal;
    int dec = 0;
    int bin[50];
    int i = 0;
    int j;

    cout << "Enter a hexadecimal value : ";
    cin >> hex;

    j = strlen(hex);
    j--;

    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            hexVal = hex[i] - 48;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            hexVal = hex[i] - 55;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            hexVal = hex[i] - 87;

        dec += hexVal * (pow(16, j));
        i++;
        j--;
    }

    i = 0;
    while (dec > 0)
    {
        bin[i++] = dec % 2;
        dec /= 2;
    }

    for (--i; i >= 0; i--)
        cout << bin[i];

    getch();
    return 0;
}
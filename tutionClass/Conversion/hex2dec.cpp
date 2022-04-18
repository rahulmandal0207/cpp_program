#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    char hex[10];
    int hexValue;
    int dec = 0;
    int i = 0;
    int j;

    cout << "Enter a hexadecimal value : ";
    cin >> hex;
    
    j = strlen(hex);
    j--;

    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            hexValue = hex[i] - 48;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            hexValue = hex[i] - 55;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            hexValue = hex[i] - 87;

        dec = dec + (hexValue * pow(16, j));
        j--;
        i++;
    }

    cout << "Decimal : " << dec;
    getch();
    return 0;
}
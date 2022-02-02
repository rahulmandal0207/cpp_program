#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char hexVal[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[50];
    int dec;
    int i = 0;
    int rem;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        rem = dec % 16;
        hex[i] = hexVal[rem];
        dec /= 16;
        i++;
    }

    cout << "Hexadecimal : ";
    for (--i; i >= 0; i--)
        cout << hex[i];

    getch();
}
// binary to decimal
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int bin, dec = 0, rem, i = 0;
    cout << "enter a binary number :";
    cin >> bin; //1110
    while (bin > 0)
    {
        rem = bin % 10;
        dec = dec + pow(2, i);
        i += 1;
        bin /= 10;
    }
    cout << "decimal:" << dec;
    getch();
    return 0;
}
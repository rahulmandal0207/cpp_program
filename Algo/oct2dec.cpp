#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int oct;
    int dec = 0;
    int rem;
    int i = 0;

    cout << "Enter a octal number : ";
    cin >> oct;

    while(oct > 0)
    {
        rem = oct % 10;
        dec += rem * pow(8 ,i);
        oct /= 10;
        i++;
    }

    cout << "Decimal : " << dec;

    getch();
    return 0;
}
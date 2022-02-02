#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, dec = 0, rem;
    cout << "Enter a Octal no ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        if (rem > 7)
        {
            cout << "Invalid no ";
            break;
        }

        else
        {
            rem = n % 10;
            dec = dec + (rem * pow(8, i));
            i += 1;
            n = n / 10;
        }
    }
    cout << "Decimal no is = " << dec;
    getch();
}
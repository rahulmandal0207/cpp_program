#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int dec;
    int rem;
    int bin = 0;
    int place = 1;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        rem = dec % 2;
        bin = (rem * place) + bin;
        dec /= 2;
        place *= 10;
    }

    cout << "Binary : " << bin;

    getch();
    return 0;
}
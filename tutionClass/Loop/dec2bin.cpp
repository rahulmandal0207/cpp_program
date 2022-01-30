#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int dec;
    int rem;
    int bin = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        rem = dec % 2;
        bin = (bin * 10) + rem;
        dec /= 2;
    }

    cout << "Binary : " << bin;

    getch();
    return 0;
}
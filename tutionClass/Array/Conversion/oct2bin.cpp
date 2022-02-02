#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int oct;
    int bin[10];
    int rem;
    int i = 0;

    cout << "Enter a octal number : ";
    cin >> oct;

    while (oct > 0)
    {
        rem = oct % 10;
        if (rem == 0)
        {
            bin[i++] = 0;
            bin[i++] = 0;
            bin[i++] = 0;
        }
        else
        {
            while (rem > 0)
            {
                bin[i++] = rem % 2;
                rem /= 2;
            }
        }

        oct /= 10;
    }

    cout << "Binary : ";
    for (--i; i >= 0; i--)
    {
        cout << bin[i];
    }

    getch();
    return 0;
}
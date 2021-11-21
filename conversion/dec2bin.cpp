#include <iostream>

using namespace std;

#define SIZE 65

int main()
{
    int dec;
    int bin[SIZE];
    int i = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }
    i--;
    while (i >= 0)
    {
        cout << bin[i];
        i--;
    }

    return 0;
}
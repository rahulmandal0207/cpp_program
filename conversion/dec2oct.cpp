#include <iostream>

using namespace std;

#define SIZE 65

int main()
{
    int dec;
    int oct[SIZE];
    int i = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        oct[i] = dec % 8;
        dec /= 8;
        i++;
    }
    i--;
    while (i >= 0)
    {
        cout << oct[i];
        i--;
    }
}
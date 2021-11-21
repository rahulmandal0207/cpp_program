#include <iostream>

using namespace std;

int main()
{
    int dec;
    char hex_values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    char hex[16];
    int rem;
    int i = 0;

    cout << "Enter a decimal number : ";
    cin >> dec;

    while (dec > 0)
    {
        rem = dec % 16;
        hex[i] = hex_values[rem];
        dec /= 16;
        i++;
    }
    i--;
    while (i >= 0)
    {
        cout << hex[i];
        i--;
    }
}
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int bin;
    int dec;
    int rem;
    int i = 0;

    cout << "Enter a binary number : ";
    cin >> bin;

    while (bin > 0)
    {
        rem = bin % 10;
        dec += (rem * pow(2, i));
        bin /= 10;
        i++;
    }
    cout << dec << endl;
}
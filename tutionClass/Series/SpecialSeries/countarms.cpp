#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, a, r, c, sum, count = 0, digits;
    for (n = 100; n <= 10000; n += 1)
    {
        a = c = n, sum = 0, digits = 0;
        while (c > 0)
        {
            c /= 10;
            digits++;
        }
        while (a > 0)
        {
            r = a % 10;
            sum = sum + pow(r, digits);
            a = a / 10;
        }
        if (sum == n)
        {
            cout << n << "\t";
            count += 1;
        }
    }
    cout << "\nTotal Armstrong numbers : " << count;
    getch();
}
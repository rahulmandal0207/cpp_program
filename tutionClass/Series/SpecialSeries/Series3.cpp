// x^1/1! + x^2/2! + x^3/3! ... x^n/n!
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    float x;
    int lastTerm;
    float i = 1;
    float sum = 0;

    cout << "Enter x : ";
    cin >> x;
    cout << "Enter last term : ";
    cin >> lastTerm;

    while (i <= lastTerm)
    {
        sum += pow(x, i) / fact(i);
        i++;
    }
    cout << "Sum is : " << sum;

    getch();
}
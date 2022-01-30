// x ^ 1 / 1! + x ^ 2 / 2! + x ^ 3 / 3! ... x ^ n / n!
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int x;
    int lastTerm;
    float sum = 0;
    float fact = 1;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter last term : ";
    cin >> lastTerm;

    for (int i = 1; i <= lastTerm; i += 2)
    {
        fact *= i;
        sum += pow(x, i) / fact;
    }

    cout << "Sum is : " << sum;
    getch();
    return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, factor = 2;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            factor++;
    }

    if (factor == 2)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;

    getch();
    return 0;
}
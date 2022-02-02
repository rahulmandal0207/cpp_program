#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    int sum = 0;
    int lastTerm;

    cout << "Enter last term : ";
    cin >> lastTerm;

    for (i = 1; i <= lastTerm; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum is : " << sum;

    getch();
    return 0;
}
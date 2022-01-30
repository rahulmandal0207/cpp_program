#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int lastTerm;
    int i;
    int sum = 0;

    cout << "Ente last Term : ";
    cin >> lastTerm;

    for (i = 1; i <= lastTerm; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "\nSum is : " << sum;
    getch();
    return 0;
}
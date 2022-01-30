#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    int lastTerm;

    cout << "Enter a number : ";
    cin >> n;
    cout << "Ente last term : ";
    cin >> lastTerm;

    for (int i = 1; i <= lastTerm; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    getch();
    return 0;
}
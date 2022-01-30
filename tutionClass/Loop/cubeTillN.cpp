#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int lastTerm;

    cout << "Enter last Term : ";
    cin >> lastTerm;

    for(int i = 1; i <= lastTerm; i++)
    {
        cout << "Cube of " << i << " is " << i * i * i << endl;
    }

    getch();
    return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int first = 0, second = 1, next;

    while (first <= 100)
    {
        cout << first << " \t";
        next = first + second;
        first = second;
        second = next;
    }

    getch();
    return 0;
}
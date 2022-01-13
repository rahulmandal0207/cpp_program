#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int j = 1;
    int lastTerm;
    cout << "Enter last term : ";
    cin >> lastTerm;

    while (j <= lastTerm)
    {
        i = 2;
        while (i < j)
        {
            if (j % i == 0)
                break;
            i++;
        }
        if (i == j)
            cout << j <<  "\t";
        j++;
    }
}
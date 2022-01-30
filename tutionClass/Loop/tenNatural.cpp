#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    int sum = 0;

    for(i = 1; i<=10; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "\nSum is : " << sum ;

    getch();
    return 0;
}
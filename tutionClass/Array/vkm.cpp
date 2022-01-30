// second largest in an array of 5 element
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5] = {661, 34, 28, 434, 50};
    int max;
    int max2;

    if (arr[0] < arr[1])
    {
        max = arr[1];
        max2 = arr[0];
    }
    else
    {
        max = arr[0];
        max2 = arr[1];
    }

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max2 && arr[i] < max)
        {
            max2 = arr[i];
        }
    }

    cout << max << endl;
    cout << max2;
    getch();
    return 0;
}
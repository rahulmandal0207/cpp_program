#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[5] = {1, 44, 23, 44, 5};
    int max;
    int secMax;
    max = arr[0];
    
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    secMax = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if(arr[i] == max)
            continue;
        else 
        {
            if(arr[i] > secMax)
            {
                secMax = arr[i];
            }
        }
    }

    cout << max << endl;
    cout << secMax;
    getch();
    return 0;
}
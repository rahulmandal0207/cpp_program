// third largest element in an array
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5] = {22, 3, 42, 121, 52};
    
    int max1 = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if(arr[i] > max3 && arr[i] < max2)
        {
            max3 = arr[i];
        }
    }

    cout << max3;


    getch();
    return 0;
}
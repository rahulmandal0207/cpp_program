#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[5] = {1, 23, 4, 2321, 32};

    int max1 = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];
    int max4 = arr[0];

    int i;

    for(i = 1;i < 5; i++)
    {
        if(arr[i] > max1)
            max1 = arr[i];
    }    

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
    }

    for(i = 1;i < 5;i ++)
    {
        if(arr[i] > max3 && arr[i] < max2)
            max3 = arr[i];
    }

    for(i = 1;i < 5;i++)
    {
        if(arr[i] > max4 && arr[i] < max3)
            max4  = arr[i];
    }


    cout << max1 << endl;
    cout << max2 << endl;
    cout << max3 << endl;
    cout << max4 << endl;

    getch();
}
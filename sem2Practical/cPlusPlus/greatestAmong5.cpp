#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[5], max, i;
    cout << "Enter five numbers : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Greatest among five is : " << max;

    getch();
    return 0;
}
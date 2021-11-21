#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[5], min, i;
    cout << "Enter five numbers : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest among five is : " << min;

    getch();
    return 0;
}
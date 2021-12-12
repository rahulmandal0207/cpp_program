#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    cout << "Enter any five numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum is : " << sum << endl;

    getch();
    return 0;
}
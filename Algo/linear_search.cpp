#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {45, 22, 12, 333, 23, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, 41);
    if (result < 0)
        cout << "Element not found !" << endl;
    else
        cout << "Element found at index : " << result << endl;
}
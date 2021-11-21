#include <iostream>

using namespace std;

// for binary search array must be sorted
int binarySearch(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int middle;

    while (end >= start)
    {
        middle = (start + end) / 2;
        if (element == arr[middle])

            return middle;

        else if (element > arr[middle])

            start = middle + 1;

        else if (element < arr[middle])

            end = middle - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 65, 77, 82, 96, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearch(arr, size, 100);
}
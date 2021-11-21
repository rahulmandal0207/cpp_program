#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selSort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
            
        }
        if (min != i)
            swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int arr[] = {45, 22, 12, 333, 23, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
#include <iostream>
using namespace std;

void printNumber(int *ptr)
{
    cout << *ptr << endl;
}

void printLetter(char *ptr)
{
    cout << *ptr << endl;
}

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}

int getMin(int number[])
{
    int size = sizeof(number) / sizeof(number[0]);
    int min = number[0];
    for (int i = 0; i < size; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    return min;
}
int getMax(int number[], int size)
{
    int max = number[0];
    for (int i = 0; i < size; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    return max;
}

// call by reference 
void getMinAndMax(int number[], int size, int *min, int *max)
{

    for (int i = 0; i < size; i++)
    {
        if (number[i] < *min)
        {
            *min = number[i];
        }
        if (number[i] > *max)
        {
            *max = number[i];
        }
    }
}

int main()
{
    int number = 5;
    char letter = 'f';
    // printNumber(&number);
    // printLetter(&letter);
    // print(&number, 'i');
    // print(&letter, 'c');

    int luckyNumber[5] = {22, 4, -6, 88, -59};
    // cout << luckyNumber << endl;
    // cout << &luckyNumber[0] << endl;
    // cout << luckyNumber[2] << endl;
    // cout << *(luckyNumber + 2) << endl;
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << *(luckyNumber + i) << " ";
    // }

    cout << "Min is : " << getMin(luckyNumber);
    // result = getMax(luckyNumber,5);
    // cout << result << endl;

    // int min = luckyNumber[0];
    // int max = luckyNumber[0];
    // getMinAndMax(luckyNumber, 5, &min, &max);
    // cout << min << endl;
    // cout << max << endl;

    return 0;
}
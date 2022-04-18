#include <iostream>
#include <conio.h>

using namespace std;

#define R 3
#define C 3

int main()
{
    int A[R][C]; // matrix A
    int B[R][C]; // matrix B
    int S[R][C]; // 

    int r, c;

    cout << "Enter first A elements : ";
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            cin >> A[r][c];
        }
    }
    cout << "Enter second B elements : ";
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            cin >> B[r][c];
        }
    }

    cout << "Matrix A : " << endl;
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            cout << A[r][c] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B : " << endl;
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            cout << B[r][c] << " ";
        }
        cout << endl;
    }
    // sum

    cout << "Sum is : " << endl;
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            cout << A[r][c] + B[r][c] << " ";
            // S[r][c] << " ";
        }
        cout << endl;
    }

 

    getch();
    return 0;
}
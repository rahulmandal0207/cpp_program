#include <iostream>
#include <conio.h>

#define R 3
#define C 3

using namespace std;

int main()
{
    int A[R][C];
    int r;
    int c;
    cout << "Enter matrix elements : ";
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
            cin >> A[r][c];
    }

    cout << "\nA : " << endl;
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
            cout << A[r][c] << " ";
        cout << endl;
    }

    cout << "\nA transpose : " << endl;
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
            cout << A[c][r] << " ";
        cout << endl;
    }

    getch();
}
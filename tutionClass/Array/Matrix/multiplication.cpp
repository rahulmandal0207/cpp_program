#include <iostream>
#include <conio.h>

#define R 2
#define C 3

using namespace std;

int main()
{
    int A[R][C] = {{1, 2, 3},
                   {4, 5, 6}};

    int B[C][R] = {{9, 8},
                   {6, 5},
                   {2, 3}};

    int M[R][R];

    int r, c, i;
    int sum;

    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            
            for (i = 0; i < C; i++)
            {
                M[r][c] = A[r][i] * B[i][c];
            }
           
        }
    }

    for (r = 0; r < R; r++)
    {
        for (c = 0; c < R; c++)
        {
            cout << M[r][c] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}
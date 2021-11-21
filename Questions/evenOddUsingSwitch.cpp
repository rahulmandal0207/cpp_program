#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    switch (n % 2)
    {
    case 0:
        cout << n << " is even number." << endl;
        break;

    case 1:
        cout << n << " is odd number." << endl;
        break;
    
    default:
        cout << "Invalid input." << endl;
        break;
    }
    getch();
    return 0;
}
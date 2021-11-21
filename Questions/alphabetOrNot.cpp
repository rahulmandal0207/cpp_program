#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character : ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is alphabet." << endl;
    }
    else
    {
        cout << ch << " is not alphabet." << endl;
        
    }
    getch();
    return 0;
}
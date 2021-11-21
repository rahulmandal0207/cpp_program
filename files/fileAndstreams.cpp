#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    fstream f;
    string line;
    f.open("test.txt", ios::in);
    if (f.is_open())
    {
        while (!f.eof())
        {
            getline(f,line);
            cout << line << endl;
        }
        f.close();
    }
    else
    {
        cout << "Failed to open\n";
    }

    return 0;
}
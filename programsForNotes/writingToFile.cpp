#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f; // creating object of fstream class

    f.open("test.txt", ios::out); // creating new file in writing mode
    if (f.is_open())              // checking whether the file exist
    {
        f << "Hello world\n"; // writing to the file
        f.close();            // closing the file
    }
    else
    {
        cout << "Failed to open the file\n"; // printing message in case unable to open
    }

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f; // creating object of fstream class

    f.open("test.txt", ios::in); // opening file in reading mode
    if (f.is_open())             // checking whether the file exist
    {
        string line;
        while (getline(f, line)) // reading each line and stores it in the line variable
        {
            cout << line << endl; // printing each line
        }
        f.close(); // closing the file
    }
    else
    {
        cout << "Failed to open the file\n"; // printing message in case unable to open
    }

    return 0;
}
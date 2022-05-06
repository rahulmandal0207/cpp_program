#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    char lname[10];
    char name2[10];

    cout << "Enter first name : ";
    cin >> name;

    cout << "Enter last name : ";
    cin >> lname;

    cout << "
    Length of name is : " << strlen(name) << endl;


    strcpy(name2, name);
    cout << name2 << endl;

    cout << strcat(name, lname) << endl;

    int value = strcmp(name, lname);

    if (value == 1)
        cout << "Second argument is greater\n";


    int value1 = strcmp(lname, name);

    if (value1 == -1)
        cout << "Second argument is smaller\n";
        

    int value2 = strcmp(name, name);

    if (value2 == 0)
        cout << "Both the argument are same\n";

    getch();
    return 0;
}
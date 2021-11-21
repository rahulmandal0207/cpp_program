// WAP in C++ to print all ASCII character with their values.
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Birthday
{
private:
    int date;
    int month;
    int year;

public:
    Birthday(int d, int m, int y)
        : date(d), month(m), year(y)
    {
    }

    void printDate()
    {
        cout << date << "/"
             << month << "/"
             << year << endl;
    }
};

class Person
{
private:
    string name;
    Birthday bd;

public:
    Person(string n, Birthday b)
        : name(n), bd(b)
    {
    }

    void printInfo()
    {
        cout << name << " was born on ";
        bd.printDate();
    }
};

int main()
{
    Birthday bd(02, 07, 2000);
    Person p("Rahul", bd);
    p.printInfo();
    return 0;
}
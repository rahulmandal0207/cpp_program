#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    short year_of_joining;
    double salary;
    string address;

public:
    Employee(string n, short y, double s, string a)
    {
        name = n;
        year_of_joining = y;
        salary = s;
        address = a;
    }

    void getInfo()
    {
        cout << this->name << "\t" << this->year_of_joining << "\t\t" << this->address << endl;
    }
};

int main()
{
    Employee emp1("Robert", 1994, 20000, "64C- WallsStreat");
    Employee emp2("Sam", 2000, 15000, "68D- WallsStreat");
    Employee emp3("John", 1999, 20000, "26B- WallsStreat");

    cout << "Name\tJoining year\tAddress\n";
    emp1.getInfo();
    emp2.getInfo();
    emp3.getInfo();
    return 0;
}
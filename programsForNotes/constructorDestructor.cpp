#include <iostream>
using namespace std;

class Person
{
public:
    string Name;
    int Age;
    Person()            // default constructor
    {
        cout << "Constructing without parameters\n";
    }
    Person(string name, int age)   // parmeterized constructor
    {
        Name = name;
        Age = age;
        cout << "Constructing with parameters\n";
    }
    ~Person()                       // destructor
    {
        cout << "Destructing\n";
    }
};

int main()
{
    Person p1;
    Person p2("Rahul", 18);

    return 0;
}
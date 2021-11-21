#include <iostream>
using namespace std;

class Person
{
public:
    string Name;        // data member
    int Age;            // data member

    void getInfo()      // member function
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
    }
};

int main()
{
    Person p1;
    p1.Name = "Rahul";
    p1.Age = 18;
    p1.getInfo();

    return 0;
}
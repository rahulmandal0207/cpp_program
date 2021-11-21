#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;             // Private attribute

public:
    void setSalary(int s)   // Setter
    {
        salary = s;
    }

    int getSalary()         // Getter
    {
        return salary;
    }
};

int main()
{
    Employee e1;
    e1.setSalary(50000);
    cout << e1.getSalary();
    return 0;
}


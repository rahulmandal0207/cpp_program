#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle\n";
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This is a Car\n";
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "This is a Bus\n";
    }
};

int main()
{
    Car c1;
    Bus b1;
    return 0;
}
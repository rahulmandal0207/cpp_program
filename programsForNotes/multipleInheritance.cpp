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

class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler vehicle\n";
    }
};

class Car: public Vehicle, public FourWheeler
{
public:
    Car()
    {
        cout << "This car has 4 wheels\n";
    }
};

int main()
{
    Car c1;
    return 0;
}
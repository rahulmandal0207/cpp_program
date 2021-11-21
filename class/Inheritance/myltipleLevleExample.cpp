#include <iostream>
#include <conio.h>

using namespace std;

class Vehicle
{
public:
    string Name;
    int NumberOfWheels;
    char FuelType;
    float Mileage;

    void getInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Number of wheels : " << NumberOfWheels << endl;
        cout << "Fuel type : " << FuelType << endl;
        cout << "Mileage : " << Mileage << endl;
        cout << endl;
    }
};

class Car : public Vehicle
{
public:
    Car() { NumberOfWheels = 4; }
};

class Sedan : public Car
{
public:
    void setInfo(string name, char fuelType, float mileage)
    {
        Name = name;
        FuelType = fuelType;
        Mileage = mileage;
    }
};

int main()
{
    Sedan s1;
    s1.setInfo("Hyundai verna", 'P', 17.7);
    s1.getInfo();

    getch();
    return 0;
}

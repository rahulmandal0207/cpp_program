// Single inheritance

#include <iostream>
#include <conio.h>

using namespace std;

class Vehicle
{
public:
    string Name;
    int NumberOfWheels;
    char FuelType;          // D = Disel , P = Petrol , E = Electric
    float Mileage;

    void getInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Number of Wheels : " << NumberOfWheels << endl;
        cout << "Fuel type : " << FuelType << endl;
        cout << "Mileage : " << Mileage << endl;
        cout << endl;
    }
};

class Car : public Vehicle
{
public:
    Car() { NumberOfWheels = 4; }

    void setInfo(string name, char fuelType, float mileage)
    {
        Name = name;
        FuelType = fuelType;
        Mileage = mileage;
    }
};

int main()
{
    Car car;
    car.setInfo("Kia sonet", 'P', 11.3);
    car.getInfo();

    getch();
    return 0;
}
#include <iostream>

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
    Car(string name, char fuelType, float mileage)
    {
        Name = name;
        NumberOfWheels = 4;
        FuelType = fuelType;
        Mileage = mileage;
    }
};

class Bike : public Vehicle
{
public:
    Bike(string name, char fuelType, float mileage)
    {
        Name = name;
        NumberOfWheels = 2;
        FuelType = fuelType;
        Mileage = mileage;
    }
};

int main()
{
    Car c("Maruti Suzuki Dezire", 'P', 23.6);
    Bike b("Honda CB shine", 'P', 55);

    c.getInfo();
    b.getInfo();

    cin.get();
    return 0;
}
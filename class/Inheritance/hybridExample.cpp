#include <iostream>

using namespace std;

  

class Car : public Vehicle
{
public:
    Car() { NumberOfWheels = 4; }
};

class Sedan : public Car
{
public:
    Sedan() {}
};

class Racing
{
public:
    float TopSpeed;
    float CorneringForce;
    float BrakingForce;
};

class SportsSedan : public Sedan, public Racing
{
public:
    SportsSedan(string name, char fuelType, float topSpeed, float corneringForce, float brakingForce)
    {
        Name = name;
        FuelType = fuelType;
        TopSpeed = topSpeed;
        CorneringForce = corneringForce;
        BrakingForce = brakingForce;
    }

    void getInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Fuel type : " << FuelType << endl;
        cout << "Top speed : " << TopSpeed << "kmph" << endl;
        cout << "Cornering force : " << CorneringForce << "G" << endl;
        cout << "Braking force : " << BrakingForce << "G" << endl;
        cout << endl;
    }
};

int main()
{
    SportsSedan ss1("Audi RS 3", 'P', 290, 1.5, 1.8);
    ss1.getInfo();
}
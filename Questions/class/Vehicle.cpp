#include <iostream>

using namespace std;

class Vehicle
{
protected:
    string Name;
    string Body;
    string Model;
    int Engine;
    float Mileage;

public:
    void getInfo()
    {
        cout << "Name : \t\t" << Name << " " << Model << endl;
        cout << "Body : \t\t" << Body << endl;
        cout << "Engine : \t" << Engine << " CC" << endl;
        cout << "Mileage : \t" << Mileage << " Kmpl" << endl;
        cout << endl;
    }

    void getInfoTable()
    {
        static int count = 0;
        if (count == 0)
        {
            cout << "Name\t\tModel\t\tBody\t\tEngine\t\tMileage\n";
            cout << "-----------------------------------------------------------------------\n";
        }
        cout << Name << "\t\t" << Model << "\t\t" << Body << "\t\t" << Engine << "\t\t" << Mileage << endl;
        cout << endl;
        count++;
    }
};

class Car : public Vehicle
{
public:
    Car() {}

    Car(string name, string body, string model, int engine, float mileage)
    {
        Name = name;
        Body = body;
        Model = model;
        Engine = engine;
        Mileage = mileage;
    }
};

class ElectricCar : public Car
{
public:
    short Driving_Range;
    short Battery_Capacity;

    ElectricCar(string name, string body, string model, short dRange, short batteryCap)
    {
        Name = name;
        Body = body;
        Model = model;
        Driving_Range = dRange;
        Battery_Capacity = batteryCap;
    }

    void getInfo()
    {

        cout << "Name : \t\t\t" << Name << " " << Model << " (EV)" << endl;
        cout << "Driving Range : \t" << Driving_Range << " in full charge" << endl;
        cout << "Battery Capacity : \t" << Battery_Capacity << " Kwh" << endl;
        cout << endl;
    }
};

int main()
{

    Car c1("Mahind", "SUV", "XUV 500", 2179, 15.1);
    Car c2("Maruti", "Sedan", "Swift", 1197, 23.76);
    Car c3("Tata", "Sedan", "Nexon", 1449, 18.5);
    Car c4("Maruti", "Sedan", "Dzire", 1197, 24.12);
    Car c5("Honda", "Sedan", "City", 1498, 15.32);
    Car c6("Kia", "SUV", "Sonet", 1493, 19.0);
    Car c7("Mahind", "SUV", "Xuv 700", 1999, 15);
    Car c8("Maruti", "H_back", "Baleno", 1197, 19.56);

    ElectricCar e1("Audi","Sedan", "e-tron", 326, 76);

    c1.getInfo();
    c2.getInfo();
    c3.getInfo();
    c4.getInfo();
    c5.getInfo();
    c6.getInfo();
    c7.getInfo();
    c8.getInfo();

    e1.getInfo();

    cin.get();
    return 0;
}

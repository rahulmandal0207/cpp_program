#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Car
{
    char Name[20];
    int Engine;
    int Seating;
    float Mileage;
} c;

int main()
{
    strcpy(c.Name, "Swift");
    c.Engine = 1197;
    c.Seating = 5;
    c.Mileage = 23.76;

    cout << "Name : " << c.Name << endl;
    cout << "Engine : " << c.Engine << endl;
    cout << "Seating : " << c.Seating << endl;
    cout << "Mileage : " << c.Mileage << endl;

    getch();

    return 0;
}

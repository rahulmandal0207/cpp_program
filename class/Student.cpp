#include <iostream>

#include <conio.h>

using namespace std;

class Student
{
public:
    int roll;
    char name[30];
    char address[50];
    float m1, m2, m3;
    float avrg;

    void avg()
    {
        avrg = (m1 + m2 + m3) / 3.0;
        cout << "Average is : " << avrg;
    }

    void input()
    {
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter address : ";
        cin >> address;
        cout << "Enter marks in subject 1 : ";
        cin >> m1;
        cout << "Enter marks in subject 2 : ";
        cin >> m2;
        cout << "Enter marks in subject 3 : ";
        cin >> m3;
    }

    void output()
    {
        cout << "Roll number : " << roll << endl;
        cout << "Name : " << name << endl;
        cout << "address : " << address << endl;
        cout << "Marks in subject 1 : " << m1 << endl;
        cout << "Marks in subject 2 : " << m2 << endl;
        cout << "Marks in subject 3 : " << m3 << endl;
        avg();
    }


};

int main()
{
    Student s1;
    s1.input();
    s1.output();
    getch();
    return 0;
}
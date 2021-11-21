#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
public:
    int Roll;
    string Name;
    string Address;
    int age;
    float marks[3];
    float totalMarks;
    float Average;

    Student()
    {
        cout << "Enter roll number : ";
        cin >> Roll;
        cout << "Enter name : ";
        cin >> Name;
        cout << "Enter address : ";
        cin >> Address;
        cout << "Enter age : ";
        cin >> age;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks of subject " << i + 1 << " : ";
            cin >> marks[i];
        }
    }

    void average()
    {
        totalMarks = 0;
        for (int i = 0; i < 3; i++)
        {
            totalMarks += marks[i];
        }
        Average = totalMarks / 3.0;
        cout << "\nAverage : " << Average << endl;
    }
};

int main()
{
    Student s1;
    s1.average();

    getch();
    return 0;
}
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;

#define SIZE 2

class Registration
{
    string name[SIZE];
    string father_name[SIZE];
    string session[SIZE];
    int64_t phone[SIZE];
    string stream[SIZE];
    int64_t exam_roll[SIZE];
    int coll_roll[SIZE];

    static int objCount;

public:
    void addUser()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Enter name : ";
            getline(cin, name[i]);
            cout << "Enter father's name : ";
            getline(cin, father_name[i]);
            cout << "Enter session : ";
            getline(cin, session[i]);
            cout << "Enter phone number : ";
            cin >> phone[i];
            cin.ignore();
            cout << "Enter stream : ";
            getline(cin, stream[i]);
            cout << "Enter exam roll number : ";
            cin >> exam_roll[i];
            cout << "Enter college roll number : ";
            cin >> coll_roll[i];
            cin.ignore();
        }
    }

    void display()
    {
        
        for (int i = 0; i < SIZE; i++)
        {
            objCount++;
            if (objCount == 1)
            {
                cout << left << setw(20) << "Name" << left << setw(2) << "| "
                     << left << setw(20) << "Father's name" << left << setw(2) << "| "
                     << left << setw(10) << "Session" << left << setw(2) << "| "
                     << left << setw(15) << "Phone" << left << setw(2) << "| "
                     << left << setw(10) << "Stream" << left << setw(2) << "| "
                     << left << setw(20) << "Exam roll" << left << setw(2) << "| "
                     << left << setw(20) << "College roll" << endl;
            }

            cout << left << setw(20) << name[i] << left << setw(2) << "| "
                 << left << setw(20) << father_name[i] << left << setw(2) << "| "
                 << left << setw(10) << session[i] << left << setw(2) << "| "
                 << left << setw(15) << phone[i] << left << setw(2) << "| "
                 << left << setw(10) << stream[i] << left << setw(2) << "| "
                 << left << setw(20) << exam_roll[i] << left << setw(2) << "| "
                 << left << setw(20) << coll_roll[i] << endl;
        }
    }
};

int Registration::objCount = 0;

int main()
{
    Registration r;
    r.addUser();
    r.display();
    getch();
    return 0;
}
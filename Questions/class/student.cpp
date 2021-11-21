/* Assign and print the roll number, phone number and address of two students having names "Sam" and 
"John" respectively by creating two objects of the class 'Student'. */

#include <iostream>

using namespace std;

class Student 
{
public:
    string name;
    int roll_no;
    long long phone_no;
    string address;
};

int main()
{
    Student s1;
    s1.name = "John";
    s1.roll_no = 2;
    s1.phone_no = 7759018415;
    s1.address = "Shive shakti Nagar, chas";

    cout << s1.name << endl;
    cout << s1.roll_no << endl;
    cout << s1.phone_no << endl;
    cout << s1.address << endl;
}
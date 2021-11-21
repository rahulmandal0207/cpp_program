#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
public:
	int Roll;
	string Name;
	float Marks[3];
	float Average;
	float TotalMarks;
	string subjects[3];

	void setInfo()
	{
		cout << "Enter roll : ";
		cin >> Roll;
		cout << "Enter name : ";
		cin >> Name;

		subjects[0] = "C++";
		subjects[1] = "DBMS";
		subjects[2] = "Logic Design";

		for (int i = 0; i < 3; i++)
		{
			cout << "Enter marks of " << subjects[i] << " : ";
			cin >> Marks[i];
		}
		average();
	}

	void average()
	{
		TotalMarks = 0;
		for (int i = 0; i < 3; i++)
		{
			TotalMarks += Marks[i];
		}
		Average = TotalMarks / 3.0;
		cout << "Average of roll " << Roll << " is " << Average << endl;
		cout << endl;
	}
};

int main()
{
	const int size = 4;
	Student s[size];
	for (int i = 0; i < size; i++)
	{
		s[i].setInfo();
	}
	return 0;
}
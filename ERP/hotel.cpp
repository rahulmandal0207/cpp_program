#include <iostream>
#include <conio.h>

using namespace std;

class Room
{
protected:
    string roomType;
    int noOfBeds;
    double rent;
    int roomNo;
    bool isEmpty;

public:
    Room(string roomType, int noOfBeds, double rent, int roomNo)
    {
        this->roomType = roomType;
        this->noOfBeds = noOfBeds;
        this->rent = rent;
        this->roomNo = roomNo;
        this->isEmpty = true;
    }

    void displayInfo()
    {
        cout << "Room number : " << this->roomNo << endl;
        cout << "Room type : " << this->roomType << endl;
        cout << "Number of beds : " << this->noOfBeds << endl;
        cout << "Room rent : " << this->rent << endl;
        cout << endl;
    }
};

int main()
{
    Room r("Single", 1, 3000, 101);
    r.displayInfo();

    getch();

    return 0;
}
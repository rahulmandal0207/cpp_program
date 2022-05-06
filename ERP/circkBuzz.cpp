#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Batsman
{

    string Name;
    int RunScore;
    bool IsOut;
    string OutMode;

public:
    void setData()
    {
        cout << "Enter batsman's score\n";
        cout << "Enter batsman's name : ";
        getline(cin, Name);
        cout << "Enter runs scored : ";
        cin >> RunScore;
        cout << "Enter 0 for NOT OUT and 1 for OUT : ";
        cin >> IsOut;
        if (IsOut)
        {
            cout << "Enter out mode : ";
            cin.ignore();
            getline(cin, OutMode);
        }
    }

    void getData()
    {
        cout << left << setw(20) << "Batsman name"
             << left << setw(5) << "Runs Scored"
             << left << setw(5) << "OUT"
             << left << setw(5) << "Out mode" << endl;
    }
};

int main()
{

    Batsman b1;
    b1.setData();
    b1.getData();

    getch();
    return 0;
}
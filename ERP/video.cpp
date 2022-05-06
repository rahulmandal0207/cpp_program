#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Video
{
protected:
    string Name;
    string VideoType;
    string isAccepted;
    float Rating;

    static int ID;

    Video() { Rating = 0; }
};

int Video::ID = 0;

class VideoOptions : public Video
{
public:
    void addVideo()
    {
        cout << "Enter name of the video : ";
        getline(cin, Name);
        cout << "Enter video type : ";
        getline(cin, VideoType);
        cout << "Accepted or Rejected : ";
        getline(cin, isAccepted);
        setRating();
    }

    void setRating()
    {
        if (isAccepted == "accepted" || isAccepted == "Accepted")
        {
            cout << "Enter Rating : ";
            cin >> Rating;
            cin.ignore();
        }
        else if (isAccepted == "rejected" || isAccepted == "Rejected")
        {
            Rating = 0;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }

    void displayVideo()
    {
        ID++;
        if (ID == 1)
        {

            /*    cout << left << setw(5) << "ID" << left << setw(2) << "| "
                     << left << setw(20) << "Name" << left << setw(2) << "| "
                     << left << setw(20) << "VideoType" << left << setw(2) << "| "
                     << left << setw(20) << "Accepted/Rejected" << left << setw(2) << "| "
                     << left << setw(5) << "Rating" << endl;
            */
            cout << endl;
            cout << "*******************************************************************************" << endl;
            cout << "ID   | Name                | VideoType           | Accepted/Rejected   | Rating" << endl;
            cout << "*******************************************************************************" << endl;
        }

        cout << left << setw(5) << ID << left << setw(2) << "| "
             << left << setw(20) << Name << left << setw(2) << "| "
             << left << setw(20) << VideoType << left << setw(2) << "| "
             << left << setw(20) << isAccepted << left << setw(2) << "| "
             << left << setw(5) << Rating << endl;
    }
};

int main()
{
    const int size = 2;
    VideoOptions v[size];

    for (int i = 0; i < size; i++)
    {
        v[i].addVideo();
    }
    for (int i = 0; i < size; i++)
    {
        v[i].displayVideo();
    }

    getch();
    return 0;
}
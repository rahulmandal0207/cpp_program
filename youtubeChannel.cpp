#include <iostream>
#include <conio.h>

using namespace std;

class YtChannel
{
private:
    string Name;
    int SubCount;

protected:
    string OwnerName;
    int contentQuality;

public:
    YtChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubCount = 0;
        contentQuality = 0;
    }

    void getInfo()
    {
        cout << "Name of the channel : " << Name << endl;
        cout << "Owner of this channel : " << OwnerName << endl;
        cout << "Subscriber count : " << SubCount << endl;
    }
    void sub()
    {
        SubCount++;
    }
    void unSub()
    {
        if (SubCount > 0)
        {
            SubCount--;
        }
    }
    void analytics()
    {
        if (contentQuality < 5)
        {
            cout << Name << " has poor content Quality." << endl;
        }
        else if (contentQuality >= 5)
        {
            cout << Name << " has great content Quality." << endl;
        }
    }
};

class CookingChannel : public YtChannel
{
public:
    CookingChannel(string name, string ownerName) : YtChannel(name, ownerName)
    {
    }

    void practice()
    {
        cout << OwnerName << " is trying new dishes." << endl;
        contentQuality++;
    }
};

class SingingChannel : public YtChannel
{
public:
    SingingChannel(string name, string onwerName) : YtChannel(name, onwerName)
    {
    }

    void practice()
    {
        cout << OwnerName << " is making new songs." << endl;
        contentQuality++;
    }
};

int main()
{
    CookingChannel c3("Kavita's kitchen", "kavita");
    CookingChannel c4("Nisha Madhulika", "Nisha");
    SingingChannel s1("Dino james", "Dino");

    c3.practice();
    s1.practice();
    s1.practice();
    s1.practice();
    s1.practice();
    s1.practice();
    s1.practice();

    c3.analytics();
    s1.analytics();
}

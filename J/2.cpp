// print first and last character of a string
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class String
{
    string Word;

public:
    String(string word)
    {
        Word = word;
    }

    char getFirst() 
    {
        char c = Word.front();
        return c;
    }

    char getLast()
    {
        char c = Word.back();
        return c;
    }
};


int main()
{
    String s("Car");

    cout << "First character : " << s.getFirst() << endl;   
    cout << "Last character : " << s.getLast() << endl;   

    getch();
    return 0;
}
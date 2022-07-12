// find the sum of odd place digits of a give no. using class
#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
    int Num;
    int Sum;
    int Count;
    int Rem;

public:
    Number(int num)
    {
        Num = num;
    }

    int rev()
    {
        int rev = 0;
        while (Num > 0)
        {
            Rem = Num % 10;
            rev = (rev * 10) + Rem;
            Num = Num / 10;
        }

        return rev;
    }

    int sumOdd()
    {
        int num = rev();
        Count = 1;
        Sum = 0;
        while (num > 0)
        {
            Rem = num % 10;
            if (Count % 2 != 0)
            {
                Sum += Rem;
            }
            num = num / 10;
            Count++;
        }

        return Sum;
    }
};

int main()
{
    Number n(135798243);
    cout << n.sumOdd();

    getch();
    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,a,r,sum,count=0;
    for(n=100;n<=999;n+=1)
    {
        a=n,sum=0;
        while(a>0)
        {
            r=a%10;
            sum=sum+r*r*r;
            a=a/10;
        }
        if(sum==n)
        {
            cout<<n<<"\t";
            count+=1;
        }
    }
    cout<<count;
    getch();
}
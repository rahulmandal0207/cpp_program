//count total no of armstrong no
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,a,count=0,sum,r;
    for(n=10;n<=9999;n+=1)
    {
        
        if(n>=10 && n<=99)
        {
            a=n;sum=0;
            while(a>0)
            {
                r=a%10;
                sum=sum+r*r;
                a=a/10;
            }
            if(n==sum)
            {
                cout<<n<<"\t";
                count++;
            }
        }
        else if(n>=100 && n<=999)
        {
            a=n;sum=0;
            while(a>0)
            {
                r=a%10;
                sum=sum+r*r*r;
                a=a/10;
            }
            if(n==sum)
            {
                cout<<n<<"\t";
                count++;
            }
        }
        else
        {
            a=n;sum=0;
            while(a>0)
            {
                r=a%10;
                sum=sum+r*r*r*r;
                a=a/10;
            }
            if(n==sum)
            {
                cout<<n<<"\t";
                count++;
            }
        }
       
    }
    cout<<"\nTotal no of armstrong no is = "<<count;
    getch();
    
}
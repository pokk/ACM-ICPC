#include <iostream>
#include <cmath>
using namespace std;
int Prime(int x);
int main()
{
    int in=0,i=0,count=0,temp=0;
    while (cin>>in)
    {
        if (in==0)
        {
            break;
        }
        for (i=2;i<in;i++)
        {
            if (Prime(i)!=0)
            {
                count=in-i;
                if (Prime(count)!=0)
                {
                    temp=1;
                    break;
                }
            }
        }
        if (temp==1)
        {
            cout<<in<<" = "<<i<<" + "<<count<<endl;
        }
        else 
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
        temp=0;
    }
}
int Prime(int x)
{
    int i=0;
    if (x==1)
    {
        return 0;
    }
    for (i=2;i<=sqrt(x);i++)
    {
        if (x%i==0)
        {
            break;
        }
    }
    if (i<=sqrt(x))
    {
        return 0;
    }
    else
    {
        return x;
    }
}

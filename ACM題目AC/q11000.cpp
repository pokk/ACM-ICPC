#include <iostream>
using namespace std;
int main()
{
    long long n=0,boy=1,girl=1,total=0;
    long i=0;
    while (cin>>n)
    {
        if (n==-1)
        {
            break;
        }
        if (n==0)
        {
            total=1;
            boy=0;
        }
        for (i=0;i<n;i++)
        {
            if (i==0)
            {
                total=boy+girl;
            }
            else 
            {
                girl=boy+1;
                boy=total;
                total=boy+girl;
            }
        }
        cout<<boy<<" "<<total<<endl;
        total=0;
        girl=1;
        boy=1;
    }
}

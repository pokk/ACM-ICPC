#include <iostream>
#define MAX 10000
using namespace std;
int main()
{
    int i=0,array[MAX],n=0,ans=1;
    array[0]=1;
    for (i=1;i<MAX;i++)
    {
        ans*=i;
        while (1)
        {
            if (ans%10!=0)
                break;
            ans/=10;
        }
        ans%=100000;
        array[i]=ans%10;
    }
    while (cin>>n)
        printf("%5d -> %d\n",n,array[n]);
}

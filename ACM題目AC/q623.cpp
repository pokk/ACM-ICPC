#include <iostream>
using namespace std;
int main()
{
    int fact[4000]={0},i=0,j=0,n=0,temp=2;
    fact[0]=1;
    while (cin>>n)
    {
        cout<<n<<"!"<<endl;
        if (n<temp)
        {
            temp=2;
            for (i=0;i<4000;i++)
                fact[i]=0;
            fact[0]=1;
        }
        for (i=temp;i<=n;i++)
        {
            for (j=0;j<3999;j++)
            {
                fact[j]*=i;
            }
            for (j=0;j<3999;j++)
            {
                fact[j+1]+=fact[j]/10;
                fact[j]%=10;
            }
        }
        for (i=3999;i>=0 && fact[i]==0;i--);
        for (;i>=0;i--)
        {
            cout<<fact[i];
        }
        cout<<endl;
        temp=n+1;
    }
}

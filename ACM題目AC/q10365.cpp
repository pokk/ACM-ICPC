#include <iostream>
using namespace std;
int main()
{
    int n=0,i=0,j=0,k=0,temp=0,num[3]={0},mini=999999,total=0,block[3]={0},count=0;
    cin>>count;
    while (count--)
    {
        cin>>n;
        if (n==1)
        {
            cout<<"6"<<endl;
            continue;
        }
        else if (n==2)
        {
            cout<<"10"<<endl;
            continue;
        }
        else if (n==3)
        {
            cout<<"14"<<endl;
            continue;
        }
        for (mini=999999,i=1;i<(n/2);i++)
        {
            for (j=0;j<3;j++)
                num[j]=1;
            for (temp=n,j=0;j<2;j++)
            {
                for (k=i;k<temp;k++)
                {
                    if (temp%k==0)
                    {
                        num[j]=k;
                        temp/=k;
                        break;
                    }
                }
            }
            num[2]=temp;
            total=(num[0]*num[1]+num[1]*num[2]+num[2]*num[0])*2;
            if (mini>total)
            {
                for (int h=0;h<3;h++)
                    block[h]=num[h];
                mini=total;
            }
        }
        cout<<mini<<endl;
    }
}

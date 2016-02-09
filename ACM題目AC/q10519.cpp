#include <iostream>
#include <string>
using namespace std;
int total[400],degree;
void Mul(int mul[],int n)
{
    int i=0,j=0,k=0;
    int temp[400]={0};
    for (i=0;i<400;i++)  //初始 
    {
        total[i]=0;
        temp[i]=0;
    }
    for (i=0;i<n;i++)
    {
        for (j=0,k=i;j<n;j++,k++)
        {
            temp[k]+=(mul[i]*mul[j])%10;  //個位數
            temp[k+1]+=(mul[i]*mul[j])/10;  //十位數 
            degree=k;
        }
        for (j=0;j<400;j++)  //初始 
        {
            total[j]+=temp[j];
            if (total[j]>=10)
            {
                total[j+1]+=total[j]/10;
                total[j]=total[j]%10;
            }
            temp[j]=0;
        }
    }
    if (total[degree+1]!=0)
    {
        degree++;
    }
}
int main()
{
    char input[200];
    int mul[200]={0},num[200]={0},i=0,j=0,n=0,flag=0;
    while (cin>>input)
    {
        n=strlen(input);
        flag=0;
        for (i=0,j=(n-1);i<n;i++,j--)
        {
            mul[i]=input[j]-'0';
            num[i]=input[j]-'0';
        }
        if (n==1 && num[0]<2)
        {
            flag=1;
        }
        if (flag)
        {
            if (num[0]==0)
            {
                cout<<"1"<<endl;
            }
            if (num[0]==1)
            {
                cout<<"2"<<endl;
            }
            continue;
        }
        else 
        {
            if (num[0]<2)
            {
                num[1]--;
                if (num[0]==1)
                {
                    num[0]=9;
                }
                else
                {
                    num[0]=8;
                }
            }
            else
            {
                num[0]-=2;
            }
        }
        Mul(mul,n);
        if (n==1 && num[0]>3)
        {
            degree++;
        }
        for (i=0;i<=degree;i++)
        {
            total[i]-=num[i];
            if (total[i]<0)
            {
                total[i]+=10;
                total[i+1]--;
            }
        }
        for (i=degree;i>=0;i--)
        {
            if (i==degree && total[i]==0)
            {
                continue;
            }
            cout<<total[i];
        }
        cout<<endl;
        for (i=0;i<200;i++)  //初始 
        {
            input[i]=0;
            mul[i]=0;
            num[i]=0;
        }
    }
}

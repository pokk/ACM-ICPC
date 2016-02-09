#include <iostream>
#include <cmath>
using namespace std;
int *Prime()
{
    int *array=new int[50];
    int i=0,j=0,count=0,flag=0;
    for (i=2;i<200;i++)
    {
        flag=0;
        for (j=2;j<=sqrt(i);j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            array[count]=i;
            count++;
        }
    } 
    return array;
}
int main()
{
    int *prime=new int[50],remember[200]={0},i=0,j=0,n=0,div=0,flag=0,max=0,count=0;
    prime=Prime();
    while (cin>>n)
    {
        if (n==0)
        {
            break;
        }
        if (n==1)
        {
            cout<<"  1! =  0"<<endl;
            continue;
        }
        count=0;
        max=0;
        for (i=0;i<200;i++)
        {
            remember[i]=0;
        }
        for (i=2;i<=n;i++)
        {
            div=i;
            while (1)
            {
                for (j=0;j<30;j++)
                {
                    if (div%prime[j]==0)
                    {
                        remember[prime[j]]++;
                        div=div/prime[j];
                        if (prime[j]>max)
                        {
                            max=prime[j];
                        }
                        break;
                    }
                }
                if (j>=30)
                {
                    break;
                }
            }
        }
        if (n<10)
        {
            cout<<"  "<<n<<"!"<<" = ";
        }
        else if (n==100)
        {
            cout<<n<<"!"<<" = ";
        }
        else
        {
            cout<<" "<<n<<"!"<<" = ";
        }
        for (i=0;i<200;i++)
        {
            if (remember[prime[i]]<10)
            {
                cout<<" "<<remember[prime[i]];
            }
            else
            {
                cout<<remember[prime[i]];
            }
            count++;
            if (prime[i]==max)
            {
                break;
            }
            if (count<=14)
            {
                cout<<" ";
            }
            if (count>14)
            {
                count=0;
                cout<<endl<<"       ";
            }
        }
        cout<<endl;
    }
}

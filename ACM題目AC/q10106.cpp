#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[500],str2[500];
    int num1[500]={0},num2[500]={0},temp[2000]={0},total[2000]={0},i=0,j=0,q=0;
    while (cin>>str1>>str2)
    {
        if ((strlen(str1)==1 && str1[0]=='0') || (strlen(str2)==1 && str2[0]=='0'))
        {
            cout<<"0"<<endl;
            continue;
        }
        for (i=(strlen(str1)-1),j=0;i>=0;i--,j++)
        {
            num1[j]=str1[i]-'0';
        }
        for (i=(strlen(str2)-1),j=0;i>=0;i--,j++)
        {
            num2[j]=str2[i]-'0';
        }
        for (i=0;i<501;i++)
        {
            total[i]=temp[i]=0;
        }
        for (i=0;i<500;i++)
        {
            for (j=0;j<500;j++)
            {
                temp[j]+=num1[i]*num2[j];
                if (i<999)
                {
                    temp[j+1]=temp[j]/10;
                    temp[j]%=10;
                }
            }
            for (j=0,q=i;q<1000 && j<1000;q++,j++)
            {
                total[q]+=temp[j];
                temp[j]=0;
                if (q<999)
                {
                    total[q+1]+=total[i]/10;
                    total[i]%=10;
                }
            }
        }
        for (i=999;i>=0 && total[i]==0;i--);
        for (;i>=0;i--)
        {
            cout<<total[i];
        }
        cout<<endl;
        for (i=0;i<500;i++)
        {
            str1[i]=0;
            str2[i]=0;
            num1[i]=0;
            num2[i]=0;
        }
    }
}

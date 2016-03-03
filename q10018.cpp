#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,j=0,degree=0,flag=0,count=0,n=0,total[30]={0},num[30]={0};
    char temp[30];
    cin>>n;
    while (n--)
    {
        cin>>temp;
        if (strlen(temp)==1 && temp[0]=='0')
        {
            cout<<"1 0"<<endl;
            continue;
        }
        for (i=strlen(temp)-1,j=0;i>=0;i--,j++)
            total[j]=temp[i]-'0';
        while (1)
        {
            flag=0;
            for (degree=29;total[degree]==0 && degree>=0;degree--);
            for (i=degree;i>=0;i--)
                num[i]=total[i];
            for (i=0,j=degree;i<=degree;i++,j--)
            {
                total[j]=num[i]+num[j];
            }
            for (j=29;total[j]==0 && j>=0;j--);
            count++;
            for (i=0;i<29;i++)
            {
                total[i+1]+=total[i]/10;
                total[i]%=10;
            }
            for (degree=29;total[degree]==0 && degree>=0;degree--);
            for (int t=degree,s=0;t>=(degree/2);s++,t--)
                if (total[t]!=total[s])
                    flag=1;
            if (!flag)
                break;
        }
        cout<<count<<" ";
        count=0;
        for (i=0;i<=degree;i++)
        {
            cout<<total[i];
            total[i]=num[i]=temp[i]=0;
        }
        cout<<endl;
    }
}

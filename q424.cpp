#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[120];
    int num[120]={0},total[120]={0},i=0,j=0;
    while (cin>>str)
    {
        if (strlen(str)==1 && str[0]=='0')
        {
            break;
        }
        for (i=(strlen(str)-1),j=0;i>=0;i--,j++)
        {
            num[j]=str[i]-'0';
        }
        for (i=0;i<120;i++)
        {
            total[i]+=num[i];
        }
        for (i=0;i<120;i++)
        {
            total[i+1]+=total[i]/10;
            total[i]%=10;
        }
        for (i=0;i<120;i++)
        {
            str[i]=0;
            num[i]=0;
        }
    }
    for (i=119;i>=0 && total[i]==0;i--);
    for (;i>=0;i--)
    {
        cout<<total[i];
    }
    cout<<endl;
    system ("pause");
}

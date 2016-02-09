#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[1000000],t[1000000];
    int i=0,j=0,n=0,flag=0;
    while (cin>>s>>t)
    {
        for (n=strlen(s),flag=0,j=0,i=0;i<strlen(t);i++)
        {
            if (s[j]==t[i])
                j++;
            if (j==n)
            {
                flag=1;
                break;
            }
        }
        if (flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        for (i=0;i<strlen(t);i++)                       
            s[i]=t[i]=0;
    }
}

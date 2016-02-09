#include <iostream>
using namespace std;
int main()
{
    int north[10000]={0},south[10000]={0};
    int i=0,n=0,line=0,flag=0,standard=0,count=0;
    cin>>n;
    for (count=0;count<n;count++)
    {
        for (i=0;i<10000;i++)
        {
            north[i]=0;
            south[i]=0;
        }
        cin>>line;
        flag=0;
        for (i=0;i<line;i++)
        {
            cin>>north[i]>>south[i];
        }
        standard=north[0]-south[0];
        for (i=0;i<line;i++)
        {
            if ((north[i]-south[i])==standard)
            {
                flag++;
            }
        }
        if (line==0)
        {
            flag++;
        }
        if (flag!=line)
        {
            cout<<"no"<<endl;
        }
        else 
        {
            cout<<"yes"<<endl;
        }
        if (count<n-1)
        {
            cout<<endl;
        }
    }
}

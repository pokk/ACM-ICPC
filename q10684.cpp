#include <iostream>
using namespace std;
int main()
{
    int n=0,i=0,array[10000]={0},temp[10000]={0},max=0;
    while (cin>>n)
    {
        if (!n)
            break;
        for (i=0;i<n;i++)
            cin>>array[i];
        for (i=0;i<n;i++)
        {
            if (i==0)
                temp[i]=array[i];
            else
            {
                if (temp[i-1]<0)
                    temp[i]=array[i];
                else
                    temp[i]=array[i]+temp[i-1];
            }
        }
        for (i=0;i<n;i++)
            if (temp[i]>max)
                max=temp[i];
        if (max>0)
            cout<<"The maximum winning streak is "<<max<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
        max=0;
    }
}

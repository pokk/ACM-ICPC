#include <iostream>
using namespace std;
int main()
{
    long long total[18]={0},max=0;  //¦s­È 
    int array[18]={0},neg[18]={0},n=0,i=0,j=0,count=1;
    while (cin>>n)
    {
        for (i=0;i<n;i++)
            cin>>array[i];
        for (i=0;i<n;i++)
        {
            total[i]=1;
            neg[i]=0;
        }
        for (i=0;i<n;i++)  //¥ýºâneg 
            for (j=i;j<n;j++)
                if (array[j]<0)
                    neg[i]++;
        for (i=0;i<n;i++)
        {
            if (array[i]==0)
            {
                total[i]=0;
                continue;
            }
            if (neg[i]%2==0)
                for (j=i;j<n;j++)
                {
                    if (array[j]==0)
                        break;
                    total[i]*=array[j];
                }   
            else
            {
                for (j=i;j<n;j++)
                {
                    if (neg[i]==1 && array[i]<0 && j==i)
                        total[i]=array[i];    
                    if (array[j]<0)
                        neg[i]--;
                    if (neg[i]==0 || array[j]==0)
                        break;
                    total[i]*=array[j];
                }
            }
        }
        for (i=0,max=0;i<n;i++)
            if (total[i]>max)
                max=total[i];
        cout<<"Case #"<<count++<<": The maximum product is "<<max<<"."<<endl<<endl;
    }
}

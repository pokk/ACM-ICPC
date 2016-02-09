#include <iostream>
using namespace std;  
int *LDS(int array[],int lng)  //從尾到頭    
{   
    int *temp=new int[3000],i=0,j=0,ans=0;
    for (i=0;i<lng;i++)
        temp[i]=1;   
    for (i=lng-1;i>=0;i--)   
        for (j=i-1;j>=0;j--)
            if (array[j]<=array[i])     
                temp[j]=max(temp[j],temp[i]+1);   
    return temp;   
}
int *LIS(int array[],int lng)  //從尾到頭    
{   
    int *temp=new int[3000],i=0,j=0,ans=0;
    for (i=0;i<lng;i++)
        temp[i]=1;   
    for (i=lng-1;i>=0;i--)   
        for (j=i-1;j>=0;j--)
            if (array[j]>=array[i])     
                temp[j]=max(temp[j],temp[i]+1);
    return temp;   
} 
int main()
{
    int i=0,n=0,lng=0,max=0,array[3000],*lds=new int[3000],*lis=new int[3000];
    cin>>n;
    while (n--)
    {
        cin>>lng;
        for (i=0;i<lng;i++)
            cin>>array[i];
        lds=LDS(array,lng);
        lis=LIS(array,lng);
        for (max=0,i=0;i<lng;i++)
            if (lds[i]+lis[i]-1>max)
                max=lds[i]+lis[i]-1;
        cout<<max<<endl;
    }
}

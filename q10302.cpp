#include <iostream>
using namespace std;
int main()
{
    unsigned long long total=0,array[50000],i=0,n=0;
    for (i=0,total=1;i<50000;i++,total++)
        if (i>0)
            array[i]=(total*total*total)+array[i-1];
        else
            array[i]=total*total*total;
    while (cin>>n)
        cout<<array[n-1]<<endl;
}

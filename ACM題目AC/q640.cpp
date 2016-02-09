#include <iostream>
using namespace std;
int main()
{
    int *array=new int[2000000];
    int i=0,count=0;
    for (i=0;i<1000000;i++)
        array[i]=1;
    for (i=0;i<10;i++)
        array[i+i]=0;
    for (i=10;i<100;i++)
        array[i+i%10+i/10]=0;
    for (i=100;i<1000;i++)
        array[i+i/100+(i%100)/10+i%10]=0;
    for (i=1000;i<10000;i++)
        array[i+i/1000+(i/100)%10+(i/10)%10+i%10]=0;
    for (i=10000;i<100000;i++)
        array[i+i/10000+(i/1000)%10+(i/100)%10+(i/10)%10+i%10]=0;
    for (i=100000;i<1000000;i++)
        array[i+i/100000+(i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+i%10]=0;
    for (i=0;i<1000000;i++)
        if (array[i])
            cout<<i<<endl;
    cout<<i<<endl;
    system ("pause");
}

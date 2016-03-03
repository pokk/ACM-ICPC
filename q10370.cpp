#include <iostream>
using namespace std;
int main()
{
    int n=0,array[1001]={0},i=0,num=0,count=0;
    float ava=0,total=0;
    cin>>n;
    while (n--)
    {
        cin>>num;
        for (total=0,i=0;i<num;i++)
        {
            cin>>array[i];
            total+=(float)array[i];
        }
        ava=total/num;
        for (count=0,i=0;i<num;i++)
            if (array[i]>ava)
                count++;
        total=(float)count/(float)num*100;
        printf("%.3f%%\n",total);
    }
}

#include <iostream>
using namespace std;
int Cycle_length(int number)
{
    int i=0,length=1;
    for (;number!=1;length++)
    {
          if (number%2==0)  //°¸¼Æ 
          {
              number/=2;
          }
          else
          {
              number=number*3+1;
          }
    }
    return length;
}
int main()
{
    int n=0,m=0,temp=0,i=0,max=0,flag=0;
    while (cin>>n>>m)
    {
        max=0;
        if (m>n)
        {
            flag=1;
            swap(m,n);
        }
        for (i=m;i<=n;i++)
        {
            if (Cycle_length(i)>max)
            {
                max=Cycle_length(i);
            }
        }
        if (flag==1)
        {
            swap(m,n);
            flag=0;
        }
        cout<<n<<" "<<m<<" "<<max<<endl;
    }
}

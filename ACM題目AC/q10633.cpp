#include <iostream>
using namespace std;
int main()
{
    unsigned long long n=0,ans=0;
    int flag=0;
    while (cin>>n)
    {
        if (n==0)
            break;
        if ((n*10)%9!=0)
            flag=1;
        else 
            flag=0;
        ans=(n*10)/9;
        if (flag)
            cout<<ans<<endl;
        else
            cout<<ans-1<<" "<<ans<<endl;
    }
}

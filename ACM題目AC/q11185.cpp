#include <iostream>
using namespace std;
int main()
{
    long n=0,i=0;
    int out[100000];
    while (cin>>n)
    {
        if (n<0)
            break;
        if (n<3)
        {
            cout<<n<<endl;
            continue;
        }
        for (i=0;;i++,n/=3)
        {
            out[i]=n%3;
            if (n==0)
                break;
        }
        for (i-=1;i>=0;i--)
            cout<<out[i];
        cout<<endl;
    }
}

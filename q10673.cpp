#include <iostream>
using namespace std;
int main()
{
    int n=0,x=0,k=0,p=0,q=0,i=0,j=0,temp=0,total=0;
    cin>>n;
    while (n--)
    {
        cin>>x>>k;
        if (!(x%k))
            cout<<"0 "<<k<<endl;
        else
        {
            temp=x/k;
            for (i=0;;i++)
            {
                for (j=0;;j++)
                {
                    if (j*(temp+1)>x)
                        break;
                    total=i*temp+j*(temp+1);
                    if (total==x)
                        break;
                }
                if (total==x)
                    break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}

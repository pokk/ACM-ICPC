#include <iostream>
using namespace std;
int main()
{
    int n=0,k=0,a=0,b=0,c=0,d=0;
    cin>>n;
    int m=1;
    while (n--)
    {
        cin>>k;
        for (int i=2;i<k;i++)
            if (!(k%i))
            {
                a=i;
                break;
            }
        b=k/a;
        for (int i=2;i<k;i++)
            if (!(k%i) && i!=a)
            {
                c=i;
                break;
            }
        d=k/c;
        cout<<"Case #"<<m++<<": "<<k<<" = "<<a<<" * "<<b<<" = "<<c<<" * "<<d<<endl;
    }
}

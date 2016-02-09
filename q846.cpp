#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double tot=0;
    int n=0,a=0,b=0,g=0,temp=0;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        if ((b-a)<3)
            cout<<b-a<<endl;
        else
        {
            tot=sqrt(b-a);
            g=(int)tot;
            if (tot-g>0)
                g++;
            temp=g*g;
            if (temp-(b-a)<g)
                cout<<g+(g-1)<<endl;
            else
                cout<<g+(g-2)<<endl;
        }
    }
}

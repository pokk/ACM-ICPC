#include <iostream>
using namespace std;
int main()
{
    int n=0,store=0,x=0,i=0,min=1000,max=0;
    cin>>n;
    while (n--)
    {
        min=1000,max=0;
        cin>>store;
        for (i=0;i<store;i++)
        {
            cin>>x;
            if (x>max)
                max=x;
            if (x<min)
                min=x;
        }
        cout<<(max-min)*2<<endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n=0,a=0,b=0,x=0,y=0;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        if (a<b || (a+b)%2)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        else
        {
            x=(a+b)/2;
            y=a-x;
            if (x<y)
                swap(x,y);
            cout<<x<<" "<<y<<endl;
        }
    }      
}

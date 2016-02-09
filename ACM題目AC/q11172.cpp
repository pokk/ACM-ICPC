#include <iostream>
using namespace std;
int main()
{
    int n=0,a=0,b=0;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        if (a>b)
            cout<<">"<<endl;
        else if (a<b)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
}

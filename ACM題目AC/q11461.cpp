#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a=0,b=0;
    while (cin>>a>>b)
    {
        if (a==0 && b==0)
            break;
        a=sqrt(a);
        b=(int)sqrt(b);
        if (a!=(int)a)
        {  
            a=(int)a;
            a++;
        }
        cout<<b-a+1<<endl;
    }
}

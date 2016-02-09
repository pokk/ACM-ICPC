#include <iostream>
using namespace std;
int main()
{
    int s=0,p=0,y=0,j=0,dog=0,cat=0,turtle=0;
    while (cin>>s>>p>>y>>j)
    {
        turtle=(12+j-y-p)/3;
        if (s+p!=y)
        {
            if ((12+j-y-p)%3==0)
                s++;
            else if ((12+j-y-p)%3==1)
                p++;
            else
            {
                s++;
                p++;
            }
        }
        else
        {
            if ((12+j-y-p)%3==1)
                s++;
            else if ((12+j-y-p)%3==2)
                p++;
        }
        cat=turtle+p;
        dog=cat+s;
        cout<<dog<<" "<<cat<<" "<<turtle<<endl;
    }
}

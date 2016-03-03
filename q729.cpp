#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n=0,a=0,b=0,i=0,total=1;
    char array[20];
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        for (i=0;i<20;i++)
        {
            array[i]=0;
        }
        for (i=0;i<a;i++)
        {
            if (i<(a-b))
            {
                array[i]='0';
            }
            else
            {
                array[i]='1';
            }
        }
        vector<char> can(array,array+a);
        vector<char>::iterator p;
        total=1;
        while (1)
        {
            for (p=can.begin();p!=can.end();p++)
            {
                cout<<*p;
            }
            cout<<endl;
            if (!next_permutation(can.begin(),can.end()))
            {
                break;
            }
        }
        if (n)
        {
            cout<<endl;
        }
    }
    system("pause");
}

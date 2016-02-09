#include <iostream>
#define N 999999
using namespace std;
int main()
{
    int *array=new int[N];
    int n=0,count=0;
    while (cin>>n)
    {
        if (!n)
            break;
        bool mat=false;
        count=0;
        while (1)
        {
            array[count++]=n;
            n=n*n;
            n=n/100;
            n=n%10000;
            for (int i=0;i<count;i++)
                if (array[i]==n)
                    mat=true;
            if (mat)
                break;
        }
        cout<<count<<endl;
    }
}

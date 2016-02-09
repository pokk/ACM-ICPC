#include <iostream>
using namespace std;
int main()
{
    int level=0,array[600]={0},i=0,total=0,ava=0,j=0;
    while (cin>>level)
    {
        if (!level)
            break;
        for (total=0,i=0;i<level;i++)
        {
            cin>>array[i];
            total+=array[i];
        }
        ava=total/level;
        for (total=0,i=0;i<level;i++)
            if (array[i]>ava)
                total+=array[i]-ava;
        cout<<"Set #"<<++j<<endl;
        cout<<"The minimum number of moves is "<<total<<"."<<endl<<endl;
        for (i=0;i<level;i++)
            array[i]=0;
    }
}

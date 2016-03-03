#include <iostream>
#include <string>
using namespace std;
int main()
{
    unsigned long long total=0;
    int i=0,j=0,n=0,word[20]={0},k=1;
    char in[21];
    cin>>n;
    while (n--)
    {
        cin>>in;
        for (i=0;i<strlen(in);i++)
            word[in[i]-'A']++;
        for (total=1,i=1;i<=strlen(in);i++)
            total*=i;
        for (i=0;i<20;i++)
            if (word[i]>1)
                for (j=1;j<=word[i];j++)
                    total/=j;
        cout<<"Data set "<<k++<<": "<<total<<endl;
        for (i=0;i<20;i++)
            in[i]=word[i]=0;
    }
}

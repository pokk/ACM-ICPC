#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k=7,i=0,len=0;
    char word[200];
    while (cin>>word)
    {
        len=strlen(word);
        for (i=0;i<len;i++)
        {
            word[i]-=7;
        }
        for (i=0;i<len;i++)
        {
            cout<<word[i];
        }
        cout<<endl;
        for (i=0;i<len;i++)
        {
            word[i]=0;
        }
    }
}

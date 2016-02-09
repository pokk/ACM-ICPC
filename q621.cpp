#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n=0,length=0;
    char input[10000];
    cin>>n;
    while (n--)
    {
        cin>>input;
        length=strlen(input);
        if (atoi(input)==1 || atoi(input)==4 || atoi(input)==78)
            cout<<"+"<<endl;
        else if (input[length-1]=='5' && input[length-2]=='3')
            cout<<"-"<<endl;
        else if (input[0]=='9' && input[length-1]=='4')
            cout<<"*"<<endl;
        else if (input[0]=='1' && input[1]=='9' && input[2]=='0')
            cout<<"?"<<endl;
        else
            cout<<endl;
    }
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,num=0,output[100]={0};
    char word[100],letter=0;
    for (num=2,i='A';i<='Z';i++)
    {
        output[i]=num;
        if (i=='C' || i=='F' || i=='I' || i=='L' || i=='O' || i=='S' || i=='V')
            num++;
    }
    while (cin.getline(word,100,'\n'))
    {
        for (i=0;i<strlen(word);i++)
        {
            if (word[i]>='A' && word[i]<='Z')
            {
                num=word[i];
                cout<<output[num];
            }
            else
            {
                cout<<word[i];
            }
        }
        cout<<endl;
        for (i=0;i<100;i++)
        {
            word[i]=0;
        }
    }
}

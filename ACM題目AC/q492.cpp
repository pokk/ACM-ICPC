#include <iostream>
#include <string>
#define MAX 2000000
using namespace std;
bool Compare(char c)
{
    char vocal[]={'a','e','i','o','u'};
    for (int i=0;i<5;i++)
    {
        if (vocal[i]==tolower(c))
        {
             return true;
        }
    }
    return false;
}
int main()
{
    char *word=new char[MAX],c;
    int flag=0,latter=1;
    while (cin.getline(word,MAX,'\n'))
    {
        for (int i=0;word[i]!='\0';i++)
        {
            if (((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')) && (!(word[i-1]>='a' && word[i-1]<='z') && !(word[i-1]>='A' && word[i-1]<='Z')))
            {
                latter=1;
            }
            if (latter)
            {
                latter=0;
                if (Compare(word[i])==1)  //頭是母音 
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    c=word[i];
                    i++;
                }
            }
            if ((!(word[i]>='a' && word[i]<='z') && !(word[i]>='A' && word[i]<='Z')) && ((word[i-1]>='a' && word[i-1]<='z') || (word[i-1]>='A' && word[i-1]<='Z')))  //不是字 
            {
                if (flag==1)
                {
                    cout<<"ay";
                }
                else
                {
                    cout<<c<<"ay";
                }
            }
            cout<<word[i];
            if (((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')) && word[i+1]=='\0')
            {
                if (flag==1)
                {
                    cout<<"ay";
                }
                else
                {
                    cout<<c<<"ay";
                }
            }
        }
        cout<<endl;
    }
}

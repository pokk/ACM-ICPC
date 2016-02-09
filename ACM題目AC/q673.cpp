#include <iostream>
#include <string>
using namespace std;
int main()
{
    char word[300],stack[300],s[10];
    int n=0,count=0,i=0,flag=0;
    gets(s);
    n=atoi(s);
    while (n--)
    {
        cin.getline(word,300,'\n');
        for (flag=0,count=0,i=0;i<strlen(word);i++)
        {
            if (word[i]=='(' || word[i]=='[')
                stack[count++]=word[i];
            if (word[i]==')' && stack[count-1]=='(')
            {
                stack[--count]=0;
                continue;
            }
            else if (word[i]==']' && stack[count-1]=='[')
            {
                stack[--count]=0;
                continue;
            }
            if ((!strlen(stack) || strlen(stack)) && (word[i]==')' || word[i]==']'))
            {
                flag=1;
            }
        }
        if (!strlen(stack) && !flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        for (i=0;i<strlen(word);i++)
        {
            word[i]=0;
            stack[i]=0;
        }
    }
}

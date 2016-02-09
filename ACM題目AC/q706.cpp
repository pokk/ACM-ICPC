#include <iostream>
#include <string>
using namespace std;
int main()
{
    char input[10];
    int s=0,i=0,j=0,len=0;
    for (i=0;i<10;i++)
    {
        input[i]=0;
    }
    while (cin>>s>>input)
    {
        len=strlen(input);
        if (input[0]=='0' && s==0)
        {
            break;
        }
        //第一行  
        for (i=0;i<len;i++)
        {
            if (input[i]=='1' || input[i]=='4')
            {
                for (j=0;j<s+2;j++)
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<" ";
                for (j=0;j<s;j++)
                {
                    cout<<"-";
                }
                cout<<" ";
            }
            if (i<len-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        //第二行到中間
        for (int k=0;k<s;k++)
        {
            for (i=0;i<len;i++)
            {
                if (input[i]=='0' || input[i]=='4' || input[i]=='8' || input[i]=='9')
                {
                    cout<<"|";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<"|";
                }
                else if (input[i]=='1' || input[i]=='2' || input[i]=='3' || input[i]=='7')
                {
                    cout<<" ";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<"|";
                }
                else
                {
                    cout<<"|";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<" ";
                }
                if (i<len-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        //中間行
        for (i=0;i<len;i++)
        {
            if (input[i]=='1' || input[i]=='0' || input[i]=='7')
            {
                for (j=0;j<s+2;j++)
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<" ";
                for (j=0;j<s;j++)
                {
                    cout<<"-";
                }
                cout<<" ";
            }
            if (i<len-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;  
        //中間到底行
        for (int k=0;k<s;k++)
        {
            for (i=0;i<len;i++)
            {
                if (input[i]=='1' || input[i]=='3' || input[i]=='4' || input[i]=='5' || input[i]=='7' || input[i]=='9')
                {
                    cout<<" ";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<"|";
                }
                else if (input[i]=='2')
                {
                    cout<<"|";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<" ";
                }
                else
                {
                    cout<<"|";
                    for (j=0;j<s;j++)
                    {
                        cout<<" ";
                    }
                    cout<<"|";
                }
                if (i<len-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }         
        //最底行
        for (i=0;i<len;i++)
        {
            if (input[i]=='1' || input[i]=='4' || input[i]=='7')
            {
                for (j=0;j<s+2;j++)
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<" ";
                for (j=0;j<s;j++)
                {
                    cout<<"-";
                }
                cout<<" ";
            }
            if (i<len-1)
            {
                cout<<" ";
            }
        }
        cout<<endl<<endl;         
        for (i=0;i<10;i++)
        {
            input[i]=0;
        }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n=0,answer[2000]={0},temp[2000]={0},flag=0,i=0,j=0,count=0,a=0,b=0,time=1;
    int **guess=new int*[2000];
    for (i=0;i<1500;i++)
    {
        guess[i]=new int[2000];
    }
    while (cin>>n)
    {
        if (n==0)
            break;
        for (i=0;i<n;i++)  //答案
            cin>>answer[i];
        while (1)  //開始猜 
        {
            count=0;
            for (i=0;i<n;i++)  //input 
            {
                cin>>guess[flag][i];
                if (guess[flag][i]==0)  //如果都是0 
                    count++;
            }
            if (count==n)
                break;
            flag++;
        }
        cout<<"Game "<<time++<<":"<<endl;
        for (count=0;count<flag;count++)  //計算 
        {
            a=b=0;
            for (i=0;i<n;i++)  //先把answer放到temp裡面 
                temp[i]=answer[i];
            for (i=0;i<n;i++)  //先確定A
            {
                if (temp[i]==guess[count][i])
                {
                    a++;
                    temp[i]=guess[count][i]=0;
                    //cout<<"a::"<<i<<" "<<i<<endl;
                }
            } 
            for (i=0;i<n;i++)  //再確定B 
            {
                if (temp[i]==0)
                    continue;
                for (j=0;j<n;j++)
                {
                    if (temp[i]==guess[count][j])
                    {
                        b++;
                        temp[i]=guess[count][j]=0;
                        //cout<<"b::"<<i<<" "<<j<<endl;
                        break;
                    }
                }
            }
            cout<<"    ("<<a<<","<<b<<")"<<endl;
        }
        flag=0;  //初始 
        for (i=0;i<n;i++)
        {
            temp[i]=0;
            answer[i]=0;
        }
        for (i=0;i<flag;i++)
        {
            for (j=0;j<n;j++)
            {
                guess[i][j]=0;
            }
        }
    }
}

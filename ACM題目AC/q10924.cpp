#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool Is_prime(int n)
{
    int i=0;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return false;
    return true;
}
int main()
{
    int i=0,j=0,total=0;
    char letter[60],word,input[30];
    for (word='a',i=1;i<=52;i++,word++)
    {
        if (word=='z'+1)
            word='A';
        letter[i]=word;
    }
    while (cin>>input)
    {
        for (i=0;i<strlen(input);i++)
        {
            for (j=1;;j++)
                if (input[i]==letter[j])
                    break;
            total+=j;
        }
        if (Is_prime(total))
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
        for (i=0;i<strlen(input);i++)
            input[i]=0;
        total=0;
    }
}

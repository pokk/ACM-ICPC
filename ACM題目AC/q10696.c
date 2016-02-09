#include<stdio.h>

int f91(int n)
{
    if(n <= 100)
        return f91(f91(n+11));
    else
        return n-10;
}

int main()
{
    int i;
    int result;
    while(1)
    {
        scanf("%d",&i);
        if(i == 0)
            break;
        result = f91(i);
        printf("f91(%d) = %d\n",i,result);       
    }
    
    return 0;   
}

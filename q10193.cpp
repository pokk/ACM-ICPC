#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int btod( char *str )
{
  int num=0;
  int j=0;
  for( int i=strlen(str)-1; i>=0; i--, j++ )
    num += (int)pow(2,j)*(str[i]-'0');
  return num;
}
bool compare( int a,int b )
{
  if (a>b)
  { 
    while (1)
    {  
      a%=b;
      if (!a)
      {
        if (b!=1)
          return false;  //ぃが処
        else 
          return true;  //が処    
      }
      b%=a;
      if (!b)
      {
        if (a!=1)
          return false;  //ぃが処
        else 
          return true;  //が処 
      }
    }
  }
  else if (b>a)
  {
    while (1)
    {  
      b%=a;
      if (!b)
      {
        if (a!=1)
          return false;  //ぃが処
        else 
          return true;  //が処 
      }
      a%=b;
      if (!a)
      {
        if (b!=1)
          return false;  //ぃが処
        else 
          return true;  //が処    
      }
    }
  }
  else 
    return false;
}
int main(void)
{
  int n,count=0;
  char s1[31]={0};
  char s2[31]={0};
  cin>>n;
  while( n-- )
  {
    cin >> s1 >> s2;
    if ( !compare( btod(s1) , btod(s2) ) )
      cout<<"Pair #"<<++count<<": All you need is love!"<<endl;
    else
      cout<<"Pair #"<<++count<<": Love is not all you need!"<<endl;
  }
  return 0;
}

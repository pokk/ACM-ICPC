#include <iostream>

using namespace std;

int div( int num )
{
  if( num < 2 )
    return 1;
  int i;
  int max_div = 2;
  for( i=2; i*i<num; i++ )
    if( num % i == 0 )
      max_div+=2;
  if( i * i == num )
    max_div++;
  return max_div;
}
int main(void)
{
  int N;
  int L, U;
  int max_num= 0, max_div = 0, max_tmp;
  cin >> N;
  while( N-->0 )
  {
    cin >> L >> U;
    for( int i=U; i>=L; i-- )
    {
      max_tmp = div(i);
      if( max_tmp >= max_div )
      {
        max_div = max_tmp;
        max_num = i;
      }
    }
    printf("Between %d and %d, %d has a maximum of %d divisors.\n", L, U, max_num, max_div);
    max_num = 0;
    max_div = 0;
  }
  return 0;
}

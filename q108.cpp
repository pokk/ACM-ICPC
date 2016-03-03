#include <iostream>

using namespace std;

int main(void)
{
  int n;
  int tmp=0, j_tmp=0, k_tmp=0, sum=0, tmp_max=-128, max=-128;
  cin >> n;
  int **num = new int*[n];
  for( int i=0; i<n; i++ ) num[i] = new int[n];
  for( int i=0; i<n; i++ ) for( int j=0; j<n; j++ ) num[i][j] = 0;
  for( int i=0; i<n; i++ ) for( int j=0; j<n; j++ ) cin >> num[i][j];
  for( int i=0; i<n*n; i++ )
  {
    for( int j=i/n; j<n; j++ )
    {
      for( int k=i%n; k<n; k++ )
      {
        for( int l=i/n; l<=j; l++ )
        {
          tmp += num[l][k];
        }
          if( tmp > tmp_max )
            tmp_max = tmp;
      }
          tmp = 0;
    }
    if( tmp_max > max )
      max = tmp_max;
    tmp_max = -128;
  }
  cout << max << endl;
  system("pause");
  return 0;
}

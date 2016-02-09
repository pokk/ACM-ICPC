#include <iostream>
#define MAX 1000000
using namespace std;
long long array[MAX];
int main()
{
    array[0] = 0;
    for(int i = 1; i < MAX; i++)
        array[i] = array[i-1] + (i + 1) / 2; 
    for(int i = 1; i < MAX; i++)
        array[i] += array[i-1];
    int n;
    while((cin >> n) && (n >= 3))
        cout << array[n-3] << endl;
}

#include<fstream>
#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<array>
#include<assert.h>
#include<set>
#include<map>
#include <sstream>
#include<valarray>
#include<sstream>
#include<functional>
#include<utility>
#include<numeric>
#include<iterator>
#include<bitset>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
int r=0;cin >> r ; /// Row.
int c=0;cin >> c ; /// Col.
char arr[11][11];
long long eating=0;
for(int i=0 ;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
        cin >> arr[i][j] ;
    }
}
for(int i=0 ;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
 
        if((arr[i][j]=='W') && ((arr[i+1][j]=='P') || (arr[i][j+1]=='P')|| (arr[i-1][j]=='P') ||(arr[i][j-1]=='P') ) )
        {
            eating++;
 
        }
    }
}
 
cout << eating <<endl;
 
 
return 0;
}
 

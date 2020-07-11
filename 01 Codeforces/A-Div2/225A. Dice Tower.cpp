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
int n=0 ; /// Tower of Doc.
int m=0 ; /// Top face.
int a,b ; /// per of numbers.
int output=0;
cin >> n >> m ;
for(int i=0;i<n ;i++)
{
        cin >> a >> b ;
 
        if( a!=m && b!=m && 7-a!=m && 7-b!=m){output++;}
        else
                continue ;
}
if (output==n)
{
        cout << "YES" <<endl;
}
else
        cout << "NO" <<endl;
 
 
 
 
 
 
 
 
return 0;
}

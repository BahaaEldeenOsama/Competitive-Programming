///#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <complex>
#include <cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
using namespace std;
 
 
 
 
int main()
{
 
char matrix[100][100] ;
long long n=0 , k =0 ;cin >> n >> k ;
matrix[n][n] ;
int t=0 ;
if ( (n*n+1)/2  <  k)
{
    cout << "NO" <<endl;
}
else
{
cout << "YES" <<endl;
 
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<n ;j++)
    {
 
      if(t<k && i%2==j%2 )
      {
          cout << "L" ;t++;
      }
      else
      {
          cout << "S" ;
 
      }
    }
   cout <<endl;
}
 
 
}
return 0 ;
}

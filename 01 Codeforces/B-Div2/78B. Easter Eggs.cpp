#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
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
#include<cmath>
using namespace std;
 
int main()
{
 
/*
int n = 0 ;cin >> n ;
char c[]={ 'R','O','Y','R','B','I','V','R'} ;
if (n<=8)
{
    for (int i=0;i<n-1;i++){cout << c[i] ; }
}
else
{
 
}
*/
 
 
char str[] = "ROYGBIV";
double n=0;cin >> n;
 
cout << str ;
for (int i=7;i<n;i++){cout << str[  (i-7) %4 + 3] ;}
 
return 0;
}

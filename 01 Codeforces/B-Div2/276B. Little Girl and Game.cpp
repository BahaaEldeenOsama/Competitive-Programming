#include <iostream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<complex>
#include<cmath>
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
using namespace std;
 
 
 
int main()
{
 
string s ;cin >> s ;
int Size = s.length() ;
int Count = 0 ;
vector<int> v(26,0);
for(int i=0 ; i<Size ; i++)
{
    v[s[i] - 'a'] ++ ;
}
for(int i=0 ; i<26 ; i++)
{
    if(v[i]%2 != 0)
    {
        ++ Count ;
    }
}
if(!Count || Count%2!=0 )
{
    cout << "First\n";
}
else
{
    cout << "Second\n" ;
}
 
    return 0;
}

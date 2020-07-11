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
#include<map>
using namespace std;
 
 
int main()
{
map <char , string >mp ;
 
mp['0']  = mp ['1'] = "";
mp ['2'] = "2";
mp ['3'] = "3";
mp ['4'] = "223";
mp ['5'] = "5";
mp ['6'] = "35";
mp ['7'] = "7";
mp ['8'] = "2227";
mp ['9'] = "2337";
 
int n ;
string str ;
cin>> n >> str ;
 
int s = str.length();
string output ;
 
for(int i=0 ; i< s ;i++ )
{
    output+=mp[str[i]];
}
 
 sort(output.rbegin(),output.rend());
 
 cout << output;
 
 
        return 0;
}

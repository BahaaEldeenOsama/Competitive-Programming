#include <iterator>
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
#include<sstream>
///#include <bits/stdc++.h>
///#include <boost/multiprecision/cpp_int.hpp>
///using boost::multiprecision::cpp_int;
#include<iostream>
using namespace std;
set<char> s;char c;
int main()
{
ios_base ::sync_with_stdio(false) ;
 
 
string a ;
    cin >> a ;
    a = "a" + a ;
    int tot = 0 ;
    for (int i = 1 ; i < a.size() ; i++)
    {
        int dif = abs(a[i]-a[i-1]) ;
        tot += min(dif , 26 - dif);
    }
 
    cout << tot ;
 
 
 
return 0 ;}

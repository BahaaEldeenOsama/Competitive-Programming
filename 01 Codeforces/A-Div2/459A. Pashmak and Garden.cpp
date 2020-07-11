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
 
int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(c-a)==abs(d-b))
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    else if(a==c||b==d){
        if(a-c==0)
        cout<<a+d-b<<" "<<b<<" "<<c+d-b<<" "<<d;
        else
        cout<<a<<" "<<b+c-a<<" "<<c<<" "<<d+c-a;
    }
    else
    cout<<"-1";
 
return 0 ;}

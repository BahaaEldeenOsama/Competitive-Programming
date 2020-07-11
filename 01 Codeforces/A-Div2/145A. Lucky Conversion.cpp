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
using namespace std ;
int main()
{
string j,s;int i,a=0,b=0;cin>>j>>s;
for(i=0;i<j.length();i++)
{if(j[i]!=s[i]){a+=(j[i]=='7');b+=(j[i]=='4');}
}
cout<<max(a,b);
 
}

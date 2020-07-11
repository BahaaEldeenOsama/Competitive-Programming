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
using namespace std;
int main()
{
 
 int g=0;/// numbers of goles.
 cin >> g ;
 string s ,s1,s2;
 cin >> s;
 int goles_team_1=1;
 int goles_team_2=0;
 
 for(int i=1;i<g;i++)
 {
     cin >> s1 ;
     if(s1==s){goles_team_1++;}
     else{s2=s1; goles_team_2++;}
 }
if(goles_team_1>goles_team_2){cout<<s<<endl;}
else
{
    cout <<s2 <<endl;
}
 
 
 
return 0 ;
}

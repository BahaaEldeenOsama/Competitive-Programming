#include<iostream>
///#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
using namespace std ;
 
 
int main()
{
 
int a1=0 , a2=0 , a3=0 ,a4=0 ;
cin >> a1>>a2>>a3>>a4 ;
int count_ways=0;
string strips ;
cin >>strips ;
for(int i=0;i<strips.length();i++)      ///input>>>(1 2 3 4)  (123214)     output>>>13.
{
 if(strips[i]=='1'){count_ways+=a1;}
 if(strips[i]=='2'){count_ways+=a2;}
 if(strips[i]=='3'){count_ways+=a3;}
 if(strips[i]=='4'){count_ways+=a4;}
 
}
cout <<count_ways <<endl;
 
}

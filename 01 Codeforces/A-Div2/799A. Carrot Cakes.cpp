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
 
using namespace std;
int main()
{
 
 
int n=0 ;/// numbers of cakes.
int t=0 ;/// total time for need cakes.
int k=0 ;/// Cakes in each oven.
int d=0 ;/// time for building oven.
 
int loop=0 ;
 
cin >> n >> t >> k >> d  ;
 
loop =(n+(k-1))/k ;
int oven_1=0;
int oven_2=d;
 
for (int i=0 ; i<loop ;i++)
{
if(oven_1<=oven_2){oven_1+=t;}
else {oven_2+=t;}
}
 
 
if(max(oven_1,oven_2)<(loop*t)){cout <<"Yes"<<endl;}
else {cout << "No"<<endl;}
 
 
 
 
 
}
 
 

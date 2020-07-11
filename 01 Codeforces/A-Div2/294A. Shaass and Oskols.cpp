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
const int Max=1000 ;
int Birds[Max] ;
 
int n =0 ;
cin >> n ;
 
 
 
for (int i=0 ; i< n ; i++)
cin >>Birds[i] ;
 
 
 
int m=0 ;  /// number of kills.
cin >>m ;
 
for(int i=0 ; i<m ;i++)
{
 
    int x=0 , y=0 ;
    cin >> x ;
    cin >>y  ;
    x-- ;
    if(x!=0){Birds[x-1]+=y-1 ;}
    if(x!=n-1){Birds[x+1]+=Birds[x]-y;}
    Birds[x]=0;
}
for (int i=0 ; i<n ;i++){cout << Birds[i]<<endl;}
 
 
 
 
 
}

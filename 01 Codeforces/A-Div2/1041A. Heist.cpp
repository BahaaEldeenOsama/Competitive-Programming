#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// Coder               : BAHAA El_DEEN OSAMA SAYED.
/// Problem name        : A. Heist
/// Method              : sorting
/// Date                : 14/2/2020
///****************************************************************************************************************************************///
 
 
 
#define rep(i,x1,x2)      for(int i=x1; i<=x2 ;++i)
#define rep0(i,x)         for(int i=0; i<x ;i++)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define MP               make_pair
#define SZ(v)            ((int) ( (v).size() ) )
#define ull              unsigned long long
#define ll               long long
#define pi               3.1415926536
#define oo               1e9
#define OO               1e18
#define Fx(n)            fixed<<setprecision(n)
#define FasterIO           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
#define RE               return
//#define LD               long double
 
const  int  N   = (int) 2e5+10;
const  int  M   = (int) 1e3+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e77;
const ll MOD=1e9+7;
 
int a[1009];
int n,sum(0);
ll item(0);
 
 
int main()
{
cin>>n;
rep0(i,n){cin>>a[i];}
sort(a,a+n);
rep0(i,n-1)
{
    if(a[i+1]-a[i]>1)
        sum+=a[i+1]-a[i]-1;
}
cout <<sum;
 
 
 
 
 
 
RE0;}

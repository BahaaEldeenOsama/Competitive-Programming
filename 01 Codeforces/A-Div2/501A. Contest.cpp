#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Contest
/// level                 : A-div2
/// Method                : Brute force
/// Date                  : 13/5/2020
///****************************************************************************************************************************************///
 
#define repRot0(i,n)          for(int i=0;i*i<=n;++i)
#define rep0(i,x)         for(int i=0; i<x ;++i)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define lp(i,v)          for(int i=0;i<sizeof(v);++i)
#define lpi(i,j,n)       for(int i=(j);i>=(int)n;++i)
#define lpd(i,j,n)       for(int i=(j);i>=(int)n;--i)
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
#define rep1(i,x)        for(int i=1;i<x;++i)
#define rep2(i,x)        for(int i=2;i<x;++i)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x-1 ;i>=0;--i)
 
const  int  N   = (int) 1e4+100;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
///const ll MOD=1e8+9;
 
 
 
int a=0,b=0,c=0,d=0;
int points_of_mish=0;
int points_of_vasya=0;
int AbouGalhO0O0O0O0O0M()
{
  FasterIO;
  cin >> a>>b>>c>>d;
  points_of_mish = max(a - ((a/250) * c ) ,3*a/10  ) ;
  points_of_vasya = max(b - ((b/250) * d ),3*b/10 )  ;
 
  if(points_of_mish>points_of_vasya)
  {
      cout << "Misha" ;
  }
  else if(points_of_mish<points_of_vasya)
  {
      cout << "Vasya";
  }
  else
  {
      cout << "Tie";
  }
 
 
RE0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
AbouGalhO0O0O0O0O0M();
RE0;
}

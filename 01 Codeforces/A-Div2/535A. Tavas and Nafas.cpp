#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Tavas and Nafas
/// level                 : A-div2
/// Method                : Brute force
/// Date                  : 14/5/2020
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
 
///                                                                                                                                                                                                21        22      23      24       25       26       27
string str[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int n;
 
int AbouGalhO0O0O0O0O0M()
{
  FasterIO;
  cin>>n;
 
 
  if(n<=20)
  {
      cout << str[n];
  }
  else if( (n%10)==0 ) /// 30 40 50 60 70 80 90
  {
      cout << str[n/10 +18];
  }
  else
  {
      cout << str[ (n-n%10)/10 +18 ]  << "-" << str[n%10];
  }
 
 
RE0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
AbouGalhO0O0O0O0O0M();
RE0;
}

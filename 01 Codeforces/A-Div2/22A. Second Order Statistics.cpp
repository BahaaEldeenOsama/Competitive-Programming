#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Second Order Statistics
/// Method                : IM
/// Date                  : 31/3/2020
///****************************************************************************************************************************************///
 
 
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
 
 
 
int n=0,val=0;
set<int>s;
vector<int>vec1,vec2;
 
int AbouGalhO0O0O0O0O0M()
{
  FasterIO;
  cin>>n;
  rep0(i,n)
  {
      cin>>val;
      vec1.push_back(val);
  }
  sort(vec1.begin(),vec1.end());
 
  for(int i=0,j=0 ; i<n;++i)
  {
       if(vec1[i]!=vec1[i+1])
        {
            vec2.push_back(vec1[i]) ;
            ++j;
        }
  }
 
(vec2.size()<2)? cout << "NO" : cout << vec2[1] ;
 
 
 
 
 
RE0;
}
 
 
 
 
 
 
 
 
 
 
 
int main()
{
AbouGalhO0O0O0O0O0M();
RE0;}

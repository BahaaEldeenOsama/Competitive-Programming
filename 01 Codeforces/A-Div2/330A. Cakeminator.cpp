#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Cakeminator
/// Method                : IM
/// Date                  : 29/3/2020
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
 
 
 
int r=0,c=0,cnt1=0,cnt2=0,total=0;
char s;
bool flag=true;
 
set<int>row_pos,col_pos;
 
int AbouGalhO0O0O0O0O0M()
{
  FasterIO;
 
  cin>>r>>c;
  rep0(i,r)
  {
     rep0(j,c)
     {
       cin>>s;
       if(s=='S')
        {
          row_pos.insert(i);
          col_pos.insert(j);
        }
 
     }
 
  }
    cout << r*c - (row_pos.size() * col_pos.size()) <<endl;
 
RE0;
}
 
 
 
 
 
 
 
 
 
 
 
int main()
{
AbouGalhO0O0O0O0O0M();
RE0;}

#include<bits/stdc++.h>
using namespace std;
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science and artificial intelligence at Cairo University.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : DIMA and Salad.
/// ONline judged   : CodeForces
/// Assignment      : **********
/// Algorithm       : DP
/// Date            : 21/7/2019.
///****************************************************************************************************************************************///
 
 
///defines
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
#define Faster           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
#define rep1(i,x)        for(int i=1;i<=x;++i)
///****************************************************************************************************************************************///
 
 
///***************************************************************************************************************************************///
///constants
///****************************************************************************************************************************************///
 
const long long int  N = (int) 1e5+5;
const long long int  M = (int) 1e4+5;
const int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const int MOD=1000000007;
///const ll OO = 1e18 ;
///****************************************************************************************************************************************///
const int smallMAX = 101;
const int bigMax= 200000;
int n=0,k=0,a[smallMAX]={0},b[smallMAX]={0};
 
int memo[smallMAX][bigMax];
int off = 100000;
 
int dp(int idx ,int diff );
int init();
 
int main()
{
    scanf("%d %d", &n, &k);
 
	rep0(i,n)
		scanf("%d", &a[i]);
 
	rep0(i,n)
		scanf("%d", &b[i]);
 
	init();
	printf("%d\n", dp(0, off) == 0 ? -1 : dp(0, off));
	return 0;
RE0
;}
 
 
int dp(int idx ,int diff )
{
  if(idx == n )
            return diff==off ? 0 :-oo ;
 
int &ret = memo[idx][diff] ;
 
  if(ret!=-1)
            return ret ;
 diff-=off ;
 
 
return ret = max( dp(idx+1,diff+off)  ,  a[idx] +  dp(idx+1 , diff + a[idx] - b[idx]  * k + off   ));
}
 
 
int init()
{
    memset(memo , -1 , sizeof memo ) ;
}

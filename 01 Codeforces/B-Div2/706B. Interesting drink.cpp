///#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at FCICU.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : interesting drink
/// ONline judged   : CodeForces
/// Assignment      :
/// Algorithm       : DP
/// Date            : 25/7/2019.
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
#define rep1(i,x)        for(int i=1;i<x;++i)
///****************************************************************************************************************************************///
 
///constants
///****************************************************************************************************************************************///
 
const ll  N = (ll) 1e5+5;
const ll  M = (ll) 1e8+8;
const int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1000000007;
///const ll OO = 1e18 ;
///****************************************************************************************************************************************///
 
 
ll n=0 , arr_A[N] , q=0 , arr_q[N] , output[N] , cnt=0 ;
 
 
int main()
{
Faster;
 
cin >> n ;
rep0(i,n)
{
 cin >>arr_A[i] ;
}
sort(arr_A,arr_A+n);
 
int q;cin >>q ;
while(q--)
{
    int Qi;cin >> Qi ;
    cout << upper_bound(arr_A ,arr_A+n,Qi) - arr_A <<endl;
}
 
 
 
RE0;}

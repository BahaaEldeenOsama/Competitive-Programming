#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at FCICU.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : B. Perfect Number
/// ONline judged   : CodeForces
/// Assignment      : **********
/// Algorithm       : DP
/// Date            : 24/7/2019.
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
 
///constants
///****************************************************************************************************************************************///
 
const long long int  N = (int) 1e5+5;
const long long int  M = (int) 1e4+5;
const int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const int MOD=1000000007;
///const ll OO = 1e18 ;
///****************************************************************************************************************************************///
 
bool divDig(int n) ;
 
 
int main()
{
	int k;
	cin >> k;
	int i=0;
	ll number=19;
	while(i<k){
		if(divDig(number))
			i++;
		number++;
	}
	--number;
 
 
 
	cout<<number<<endl;
 
RE0
;}
 
bool divDig(int n)
{
    int sum=0 ;
   while(n>0)
   {
       sum +=n % 10 ;
        n/=10 ;
  }
 
    if (sum==10)return true ;
 
  return false;
}

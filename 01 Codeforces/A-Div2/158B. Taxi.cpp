#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// Coder               : BAHAA El_DEEN OSAMA SAYED.
/// Problem name        : B. Taxi
/// Method              : brute force
/// Date                : 18/2/2020
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
 
const  int  N   = (int) 1e5+10;
const  int  M   = (int) 1e3+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e77;
const ll MOD=1e9+7;
 
 
int val=0,n=0,taxis=0;
int idx1=0,idx2=0,idx3=0;
int arr[N];
 
int main()
{
 
cin>>n;
rep0(i,n)
{
   cin>>arr[i];
   if(arr[i]==4)
       ++taxis;
   else if(arr[i]==3)
       ++idx3;
   else if(arr[i]==2)
       ++idx2;
   else if(arr[i]==1)
       ++idx1;
}
 
 
rep0(i,n)
{
    if (idx1 != 0 && idx3 != 0)
    		{
    			taxis++; idx1--; idx3--;
    		}
    else if (idx1 == 0 && idx3 != 0)
    		{
    			taxis++; idx3--;
    		}
    else if (idx1 > 1 && idx2 != 0)
    		{
    			taxis++; idx1 -= 2; idx2--;
    		}
    else if (idx1 != 0 && idx2 != 0)
    		{
    			taxis++; idx1--; idx2--;
    		}
    else if (idx1 == 0 && idx2 >1)
    		{
    			taxis++; idx2=idx2-2;
    		}
    else if(idx1==0&&idx2!=0)
    		{
    			taxis++; idx2--;
    		}
    else if (idx1 >4)
    		{
    			taxis++;
    			idx1-=4;
    		}
    else if (idx1 <=4&&idx1>=1)
    		{
    			taxis++; idx1 = 0;
    		}
}
cout << taxis;
 
 
 
 
 
 
RE0;}

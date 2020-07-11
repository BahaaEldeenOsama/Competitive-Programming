#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at FCICU.
/// Coder           : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : A. Cards
/// ONline judged   : CODEFORCES.
/// Assignment      : Yes
/// Contest         : No
/// Algorithm       :Greedy
/// Date            :31/1/2020.
///****************************************************************************************************************************************///
 
 
 
 
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define lp(i,v)          for(int i=0;i<v.size();++i)
#define lpi(i,j,n)       for(int i=(j);i>=(int)n;++i)
#define lpd(i,j,n)       for(int i=(j);i>=(int)n;--i)
#define MP               make_pair
#define SZ(v)            ((int) ( (v).size() ) )
#define ull              unsigned long long
///#define ll               long long
#define pi               3.1415926536
#define oo               1e9
///#define OO               1e18
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
///#define rep0(i,x)        for(int i=0;i<x;++i)
#define RE               return
 
 
 
typedef long double LD;
typedef vector<int>VI;
typedef vector<double>VD;
typedef vector<VD>VVD;
typedef vector<string>VS;
typedef pair<int ,int>PA;
typedef pair<int,PA>PAA;
typedef vector<int>V ;
typedef vector<int>weight;
typedef pair<int,int>II;
typedef vector<vector<pair<int, int> > > VVP;
typedef pair<int,pair<int,int> >PIP;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
 
///***************************************************************************************************************************************///
typedef long long ll;
 
 
///****************************************************************************************************************************************///
const  int  N   = (int) 1e5+5;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1e8+9;
///****************************************************************************************************************************************///
 
 
 
 
 
 
 
int main()
{
FasterIO ;
int i=0 , j=0 ;
int n=0 ;cin>>n;
///int*arr = new int [n] ;
pair<int,int>arr[n] ;
for(;i<n;++i)
{
    cin>>arr[i].first ;
    arr[i].second=i+1;
}
sort(arr,arr+n);
for(;j<n/2;++j)
{
    cout << arr[j].second << " " << arr[n-1-j].second << "\n" ;
}
 
 
 
 
RE0;}

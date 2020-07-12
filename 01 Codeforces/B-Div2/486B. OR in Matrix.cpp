///#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at FCICU.
/// Coder           : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : B. OR in Matrix
/// ONline judged   : CodeForces.
/// Assignment      : A2
/// Algorithm       : DP
/// Date            : 28/7/2019.
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
///#define ll               long long
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
#define rep1(i,x)        for(int i=1;i<=x;++i)
#define RE               return
//#define LD               long double
///****************************************************************************************************************************************///
 
/// types Defines.
///***************************************************************************************************************************************///
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
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
 
///***************************************************************************************************************************************///
 
 
///constants
///****************************************************************************************************************************************///
const  int  N   = (int) 4e3+5;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1e9+7;
///****************************************************************************************************************************************///
 
 
 
int main()
{
FasterIO;
int n,m;
	cin>>n>>m;
 
	bool a[n][m],b[n][m],c[n][m];
 
	rep0(i,n)
	{
		rep0(j,m)
		{
			cin>>b[i][j];
			a[i][j]=1;
            c[i][j]=0;
		}
	}
 
	rep0(i,n)
	{
		rep0(j,m)
		{
			if(b[i][j]==0)
			{
				rep0(k,m)
				{
					a[i][k]=0;
				}
				rep0(k,n)
				{
					a[k][j]=0;
				}
			}
		}
	}
 
	rep0(i,n)
		{
			rep0(j,m)
			{
				if(a[i][j]==1)
				{
					rep0(k,m)
					{
						c[i][k]=1;
					}
					rep0(k,n)
					{
						c[k][j]=1;
					}
				}
			}
		}
 
	rep0(i,n)
		{
			rep0(j,m)
			{
				if(b[i][j]!=c[i][j])
				{
					cout<<"NO\n";
					return 0;
				}
			}
		}
 
	cout<<"YES\n";
	rep0(i,n)
		{
			rep0(j,m)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
RE0;
}
 

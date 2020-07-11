#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// Coder               : BAHAA El_DEEN OSAMA SAYED.
/// Problem name        : A. Help Vasilisa the Wise 2
/// Sheet/Contest       : MSE
/// Method              : IM
/// Date                : 26/1/2020
///****************************************************************************************************************************************///
 
 
 
 
 
 
 
///defines
///****************************************************************************************************************************************///
#define rep(i,x1,x2)      for(int i=x1; i<=x2 ;++i)
#define rep0(i,x)         for(int i=0; i<x ;i++)
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
typedef vector<int>vec;
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
typedef vector<char>Vchar;
 
///***************************************************************************************************************************************///
 
 
///constants
///****************************************************************************************************************************************///
const  int  N   = (int) 1e5+10;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
const ll MOD=1e9+7;
///****************************************************************************************************************************************///
 
int r1,r2,c1,c2,d1,d2(0);
 
 
int main()
{
FasterIO;
  cin>>r1>>r2>>c1>>c2>>d1>>d2;
 
 
    for( int x00=1; x00<10; x00++)
    {
        for( int x01=1; x01<10; x01++)
        {
            for( int x10=1; x10<10; x10++)
            {
                for( int x11=1; x11<10; x11++)
                {
                    if((x00+x01==r1) && (x10+x11==r2) && (x00+x10==c1) && (x01+x11==c2) && (x00+x11==d1) && (x01+x10==d2) && x00!=x01 && x00!=x10 && x00!=x11 && x01!=x10 && x01!=x11 && x10!=x11)
                    {
                        cout<<x00<<" "<<x01<<"\n"<<x10<<" "<<x11;
                        RE0;
                    }
                    else continue;
                }
            }
        }
    }
    cout<<-1;
 
 
 
RE0;}
 

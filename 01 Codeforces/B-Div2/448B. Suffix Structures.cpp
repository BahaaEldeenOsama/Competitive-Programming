///#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at FCICU.
/// Coder           : BAHAA El_DEEN OSAMA SAYED.
/// Problem name    : B.Suffix Structures
/// ONline judged   : CODEFORCES
/// Assignment      : H2O
/// Algorithm       : String
/// Date            : 4/8/2019.
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
#define rep1(i,x)        for(int i=1;i<x;++i)
#define rep2(i,x)        for(int i=2;i<x;++i)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
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
const  int  N   = (int) 1e5+5;
const  int  M   = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
const ll MOD=1e9+7;
///****************************************************************************************************************************************///
 
 
 
int main()
{
 
FasterIO;
 
 
string str1 , str2 ; cin >> str1  >> str2  ;
int sz1 = str1.length() ;
int sz2 = str2.length() ;
string str11 , str22 ;
str11 = str1 ;
str22 = str2 ;
 
sort(str11.begin(), str11.end() ) ;
sort(str22.begin() , str22.end() ) ;
 
if(str11== str22)
{
    cout << "array"  << endl;
}
else
{
    int cnt = 0 ;
    rep0(i,sz1)
    {
        if(str1[i]==str2[cnt])
            ++cnt ;
    }
    if(cnt==sz2)
    {
        cout << "automaton" <<endl;
    }
    else
    {
       int cnt = 0 ;
        rep0(j,sz1)
        {
            if(str11[j] == str22[cnt])
                ++cnt ;
        }
        if(cnt==sz2)
        {
            cout << "both" <<endl;
        }
        else
        {
            cout << "need tree" <<endl;
        }
    }
}
 
 
 
RE0;}

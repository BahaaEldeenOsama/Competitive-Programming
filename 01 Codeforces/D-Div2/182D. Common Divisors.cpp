#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;


/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : D. Common Divisors
/// Method                : string
/// Online judge          : CF
/// Date                  : 15/7/2020
///****************************************************************************************************************************************///

#define rep0(i,x)        for(ll i=0; i<x ;++i)
#define ll               long long
#define RE0              return 0
#define loop(x)          while(x--)
#define repRot0(i,n)     for(int i=0;i*i<=n;++i)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define lp(i,v)          for(int i=0;i<sizeof(v);++i)
#define lpi(i,j,n)       for(int i=(j);i>=(int)n;++i)
#define lpd(i,j,n)       for(int i=(j);i>=(int)n;--i)
#define MP               make_pair
#define SZ(v)            ((int) ( (v).size() ) )
#define ull              unsigned long long
#define pi               3.1415926536
#define oo               1e9
#define OO               1e18
#define Fx(n)            fixed<<setprecision(n)
#define FasterIO           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
#define rep1(i,x)        for(int i=1;i<x;++i)
#define rep2(i,x)        for(int i=2;i<x;++i)
#define rep(i,x,xx)        for(ll i=x;i<xx;i++)
#define RE               return
//#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x ;i>0;--i)

const  int   N  = (int) 1e6+100;
const  int   M  = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
///const double ESP = 1e-7;
///const ll MOD=1e8+9;

ll gcd(int a , int b)
{
    return (b==0) ? a : gcd(b,a%b) ;
}

string s1,s2,sub1,sub2;
ll cnt_s1=0,cnt_s2=0,cnt=0;
bool flag_s1=false ,flag_s2=false ;

bool check(string a,int d)
{
    rep0(i,a.length())
    {
        if(a[i]!=s1[i%d])
        {
            return false ;
        }
    }
 return true;
}


int Solve()
{

     cin>>s1>>s2;
     rep(i,1,s1.length()+s2.length())
     {
         if(s1.length()%i == 0 && s2.length() % i == 0 )
         {
             if( check(s1,i) && check(s2,i) )
             {
                 ++cnt;
             }
         }
     }


     cout << cnt <<endl;

 RE0;
}





int main()
{
Solve();
RE0;
}

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;


/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : C. Lunar New Year and Number Division
/// Method                : string
/// Online judge          : CF
/// Date                  : 16/7/2020
///****************************************************************************************************************************************///


#define ll               long long
#define RE0              return 0
#define loop(x)          while(x--)
#define repRot0(i,n)     for(int i=0;i*i<=n;++i)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
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
#define rep(i,x,xx)        for(ll i=x;i<xx;i++)
#define RE               return
#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x ;i>0;--i)

const  int   N  = (int) 1e6+100;
const  int   M  = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1e8+9;

ll bahaa_Power(int base,int power)
{
    if(power==0)
    {
        RE 1;
    }

    RE base* bahaa_Power(base,power-1);
}

vector<int>vec;
int n,val;
ll sum=0;

int Solve()
{

     cin>>n;
     rep(i,0,n)
     {
         cin>>val;
         vec.push_back(val);
     }
     sort(all(vec));
     for(int i=0 ; i<n;i++)
     {
         sum += bahaa_Power(vec[i]+vec[n-1],2);
         --n;
     }
     cout << sum <<endl;


 RE0;
}





int main()
{
Solve();
RE0;
}

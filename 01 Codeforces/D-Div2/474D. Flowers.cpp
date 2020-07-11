///#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<memory.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<iterator>
#include<algorithm>
#include<vector>
#include<complex>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
#include<map>
#include<sstream>
#include<stdio.h>
#include<stdio.h>
///#include<unordered_map>
using namespace std;
 
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science and artificial intelligence at Cairo University.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// G-mail          : BEOSAMACS98@GMAIL.COM
/// Problem name    : Flowers
/// ONline judged   : Codeforces
/// Assignment      : 5
/// Algorithm       : DP
/// Date            : 15/7/2019.
/// h:m             : 1:56AM.
///****************************************************************************************************************************************///
///defines
///****************************************************************************************************************************************///
#define rep(i,v)         for(int i=0;i<SZ(v);++i)
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
#define OO               1e19
#define Fx(n)            fixed<<setprecision(n)
#define Faster           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
///****************************************************************************************************************************************///
///***************************************************************************************************************************************///
///constants
///****************************************************************************************************************************************///
///const long long int  N   = (int) 1e5+5;
const long long int  M   = (int) 1e4+5;
const int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const int N = 1e5 + 5;
const int MOD=1000000007;
///****************************************************************************************************************************************///
int mem[N];
int k , tc ;
int solve(int rem = 1e5 + 1){
    if(rem < 0)return 0;
    if(rem == 0)return 1;
    int &ret = mem[rem];
    if(~ret)
        return ret;
    return ret = (solve(rem - 1) + solve(rem - k)) % MOD;
}
 
int main()
{
    scanf("%d %d",&tc,&k);
    memset(mem,-1,sizeof mem);
    solve();
    for(int i=1;i<N;i++){
        mem[i]=(mem[i] + mem[i-1])%MOD;
    }
    while(tc--){
        int a,b;
        scanf("%d %d",&a,&b);
        int ans = (mem[b] - mem[a - 1] + MOD) % MOD;
        cout<<ans<<endl;
    }
 
RE0;}

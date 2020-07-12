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
#include<unordered_map>
 
using namespace std;
 
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science and artificial intelligence at Cairo University.
/// Programmer      : BAHAA El_DEEN OSAMA SAYED.
/// G-mail          : BEOSAMACS98@GMAIL.COM
/// Problem name    : I - DZY Loves Chemistry.
/// ONline judged   : CODEFORCES.
/// Assignment      : 4
/// Algorithm       : DFS.
/// Date            : 11/7/2019.
/// h:m             : 2:22 AM.
/// Author          : BAHAA OSAMA.
/// Solved by me    : 75%
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
 
///***************************************************************************************************************************************///
 
///constants
///****************************************************************************************************************************************///
const int  N   = (int) 1e3+5;
const int  M   = (int) 2e4;
const int  INF = (int) 0x3f3f3f3f;
///****************************************************************************************************************************************///
 
int sol=1;
vector<int>adj[99];
bool vis[99];
void init();
int find(int u);
void join(int u, int v);
long long dfs(int u);
 
 
 
 
 
int main()
{
 int n , m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;++i){
        int x,y;
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    long long ans = 1;
    for(int i=1;i<=n;++i){
        if(!vis[i]){
            ll pw = dfs(i);
            if(pw == 1)continue;
            ans *= pow(2,pw-1);
        }
    }
    cout<<ans<<endl;
RE0;}
 
 
 
 
 
 
/*void init()
{
    iota(parent, parent+n, 0);
    fill(sz, sz+n, 1);
    comps = n;
    mxComp = 1;
}
 
 
int find(int u)
{
    return u == parent[u] ? u : parent[u] = find(parent[u]);
}
 
 
 
void join(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v)  return;
    if(sz[u] > sz[v])   swap(u, v);
    parent[u] = v;
    sz[v] += sz[u];
    --comps;
    mxComp = max(mxComp, sz[v]);
}
*/
long long dfs(int u)
{
   if(vis[u])
        return 0;
    vis[u] = true;
    long long ans = 1;
    for(int i=0;i<(int)adj[u].size();++i){
        ans += dfs(adj[u][i]);
    }
    return ans;
}

#include<fstream>
#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<array>
#include<assert.h>
#include<set>
#include<map>
#include<valarray>
#include<sstream>
#include<functional>
#include<utility>
#include<numeric>
#include<iterator>
#include<bitset>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
using namespace std;
 
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi ;
typedef pair<int, int> ii;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vb> vvb;
typedef vector<vc> vvc;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<int,string> mis;
 
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define rsz(v) v.resize
#define clr(v) v.clear()
#define rev(v) reverse(all(v))
#define lop(i,n) for(int i=0; i<n; i++)
#define rlop(i,n) for(int i=n-1; i>=0; i--)
#define loop(i,start,n) for(int i=start; i<n; i++)
#define rloop(i,end,n) for(int i=n-1; i>=end; i--)
#define PB push_back
#define pb pop_back
#define f first
#define s second
#define ord0(s) (s-'0')
#define orda(s) (s-'a')
#define ordA(s) (s-'A')
 
 
 
int main()
{
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47} ;
int n=0, m=0 ;
int i=0 ;
cin >> n >> m ;
lop(i,15)
{
   if(prime[i]==n && prime[i+1]==m)
   {
    cout << "YES"  <<endl;
    return 0;
   }
}
cout << "NO" <<endl;
 
return 0;
}
 

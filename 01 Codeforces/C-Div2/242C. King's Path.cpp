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
#include<bits/stdc++.h>
using namespace std;
 
 
 
 
///defines
///****************************************************************************************************************************************///
#define rep(i,v)        for(int i=0;i<SZ(v);++i)
#define all(v)          ((v.begin()),((v.end())
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
#define Faster           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
///****************************************************************************************************************************************///
 
 
 
///constants
///****************************************************************************************************************************************///
const int N  = (int)1e5+5;
const int M  = (int)1e6+6;
///****************************************************************************************************************************************///
 
 
///Global variables.
///****************************************************************************************************************************************///
 
///****************************************************************************************************************************************///
int dx[]={1,1,1,-1,-1,-1,0,0};
int dy[]={0,-1,1,0,-1,1,-1,1};
int x0,x1,y0,y1,r,a,b,n;
map<pair<int,int>,bool> mp;
void BFS(){
    queue<pair<int,int> >q;
    q.push({x0,y0});
    int dep=0,sz,xx,yy;
    map<pair<int,int>,int> len;
    pair<int,int> node;
    bool ok=true;
    while(q.size()&&ok){
        sz=q.size();
        while(sz--&&ok){
            node=q.front();
            q.pop();
            if(node.first==x1&&node.second==y1)ok=false;
            for(int i=0;i<8&&ok;++i){
                xx=node.first+dx[i];
                yy=node.second+dy[i];
                if(mp[{xx,yy}]&&len.find({xx,yy})==len.end())q.push({xx,yy}),len[{xx,yy}]=dep+1;
            }
        }
        ++dep;
    }
    if(ok)cout<<"-1\n";
    else cout<<--dep<<endl;
}
int main(){
   Faster
    cin >> x0 >> y0 >> x1 >> y1;
    cin >> n;
    while(n--){
        cin >> r >> a >> b;
        for(int i=a;i<=b;++i)
            mp[{r,i}]=true;
    }
    BFS();
 
 
return false ;
}

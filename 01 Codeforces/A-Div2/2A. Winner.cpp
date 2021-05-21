#include <bits/stdc++.h>
#include <utility>
using namespace std;

/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Name : Bahaa El-Deen osama.
 *  Date   : 21/5/2021
 *  Topic  : implementation.
 */
#define  FasterIO std::ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define foreach(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define loop(n)   for(int i=0;i<n;++i)
#define x first
#define y second

map<string , int>mp;
string name[1009];
int score[1009];
bool vis[1009];
int n,MX=INT_MIN;

int main() {
    FasterIO;
    cin>>n;
    loop(n){
        cin>>name[i] >> score[i];
        mp[name[i]]+=score[i];
    }
    foreach(it,mp){
         MX = max(MX,it->y);
    }
    loop(n){
        vis[i] = (mp[name[i]] == MX );
    }
    mp.clear();
    loop(n){
        mp[name[i]] +=score[i];
        if(vis[i] && mp[name[i]] >=MX){
            cout << name[i] << endl;
            return 0;
        }
    }



    return 0;
}

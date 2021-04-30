
#include<bits/stdc++.h>
/*
   Hard work beats talent when talent fails to work hard.
   Author:Bahaa EL-Deen Osama
   Date:30/4/2021
*/

using namespace std;
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
#define Fx            fixed<<setprecision(12)
#define FasterIO           std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii              pair(int a, int b)
#define rep(x)           for(ll i=0;i<x;i++)
#define repp(y,x)        for(ll i=y ;x<=0;++i)
#define RE               return
#define LD               long double
#define all(v) ((v).begin()),((v).end())
#define rev_rep(i,x)     for(int i=x ;i>0;--i)
#define RE0              return 0 ;
#define MIN -2147483647;
#define setp(n)          setprecision(n)

const int MOD = 1e9+9;

bool check(string i , string j)
{
    if(i.length() == j.length())
    {
        return i<j;
    }
    return i.length()<j.length();
}


void solve()
{

    FasterIO;
   int n;
    cin>>n;
    vector <string> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];


    sort(arr.begin(),arr.end(),check);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;






}


int main(){

    solve();
    return 0;
}

#include<bits/stdc++.h>
/*
   Hard work beats talent when talent fails to work hard.
   Author:Bahaa EL-Deen Osama
   Date:14/4/2021
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
int k,sum=0,cnt=0;


void SelectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;++i)
    {
        int idx_min=i;
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]<arr[idx_min])
            {
                idx_min = j;
            }
        }
        swap(arr[i],arr[idx_min]);
    }
}

int arr[101];



void solve()
{
    FasterIO;
    cin>>k;
    rep(12){
        cin>>arr[i];
        sum+=arr[i];
    }
    SelectionSort(arr,12);

    if(sum<k)
    {
        cout << "-1\n";
    }
    else
    {
        if(k==0)
        {
            cout << "0\n";
        }
        else
        {   sum=0;
            for(int i=11;i>=0;--i)
            {
                if(sum<k)
                {
                    sum+=arr[i];
                    ++cnt;
                }
            }
            cout << cnt << endl;
        }
    }


}


int main(){

    solve();
    return 0;
}

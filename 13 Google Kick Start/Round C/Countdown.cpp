/// " Hard work beats talent when talent fails to work hard "
#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define ll long long


///  Author : Bahaa EL-Deen Osama
///  Date   : 21/3/2021
///  problem : Countdown
///  Round   : Round C 2020 - Kick Start 2020


int arr[100009];
int T,k,n,cnt=0,res=0,cas=0;



main()
{
    FasterIO;
    cin>>T;
    while(T)
    {
    cin>>n>>k;
    rep(i,0,n){cin>>arr[i];}
    rep(i,0,n)
    {
        if(arr[i]==arr[i-1]-1)
        {
            ++cnt;
        }
        else{
            cnt=0;
        }

        if(arr[i]==1)
        {
            ++cnt;
            if(cnt >= k)
            {
              ++res;
            }
        }
    }
    cout << "Case #"<<++cas << ": " << res << endl;

     res=0;
     cnt=0;

    }


return 0;
}

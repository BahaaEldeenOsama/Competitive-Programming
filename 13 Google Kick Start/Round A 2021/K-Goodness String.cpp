/// " Hard work beats talent when talent fails to work hard "
#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define ll long long


///  Author :  Bahaa EL-Deen Osama
///  Date   :  21/3/2021
///  problem : K-Goodness String
///  Round   : Round A 2021 - Kick Start 2021



int arr[100009];
int n,k,T,cas=0,sum=0,res=0,cnt=0;
string str;

main()
{

    FasterIO;
    cin>>T;
    while(T--)
    {
       cin>>n>>k;
       cin>>str;
       rep(i,0,n/2)
       {
           if( str[i]!=str[n-(i+1)] )
           {
               ++cnt;
           }
       }
       res = abs(cnt-k);
       
       cout << "Case #"<<++cas << ": " << res << endl;
       res=0;
       cnt=0;
    }




return 0;
}

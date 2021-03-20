/// You just can't beat the person who never gives up
#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rep(i,a,b)  for(int i=a;i<b;++i)


///  Author : Bahaa EL-Deen Osama
///  Date : 20/3/2021
///  Round: Round B 2020 - Kick Start 2020
///  problem : Bus Routes



int n,d,arr[500009],cnt=0;

int main()
{
    FasterIO;
    int T,cas=0;
    cin>>T;
    while(T--)
    {
      cnt=0;
      cin>>n>>d;
      rep(i,0,n){cin>>arr[i];}
      for(int i=n-1;i>=0;--i)
      {
          d = d/ arr[i] * arr[i] ;
      }


        cout<< "Case #"<<++cas<<": "<<d <<endl;
    }
}

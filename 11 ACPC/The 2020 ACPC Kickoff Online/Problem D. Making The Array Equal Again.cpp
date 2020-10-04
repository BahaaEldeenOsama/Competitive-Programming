#include<bits/stdc++.h>
using namespace std;

long long t,n,sum=0,mn=INT_MAX;
long long arr[1000009];
vector<int>vec;


int main()
{
    std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    freopen("equal.in","r",stdin);

    cin>>t;
    while(t--)
    {
         cin>>n;
         for(int i=0;i<n;++i)
         {
             cin>>arr[i];
             sum+=arr[i];
             mn=min(mn,arr[i]);
         }
         cout << sum - (mn*n) <<endl;
         sum=0;
         mn=INT_MAX;

    }


return 0;
}

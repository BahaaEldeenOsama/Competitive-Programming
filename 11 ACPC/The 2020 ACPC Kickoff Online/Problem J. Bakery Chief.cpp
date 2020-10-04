#include<bits/stdc++.h>
using namespace std;

long long t,n,k;

int main()
{
    std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    freopen("chief.in","r",stdin);

    cin>>t;
    while(t--)
    {
       cin>>k>>n;
       if(k==0)
       {
           cout << k << " " << n <<endl;
       }
       else if(n==0)
       {
           cout<< n << " " << k <<endl;
       }
       else if (n==0 && k==0)
       {
           cout<< 0 << " " << 0 <<endl;
       }
       else
       {
          cout<<k/n << " " << k-((k/n)*n)<<endl;
       }


    }

return 0;
}

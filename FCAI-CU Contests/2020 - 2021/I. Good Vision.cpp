#pragma GCC optimize ("O3")
#include<iostream>
#include<algorithm>

using namespace std;



/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : I. Good Vision
/// Method                : IM
/// Online judge          : CF
/// Date                  : 20/10/2020
///****************************************************************************************************************************************///
/*
const  int   N  = (int) 1e6+100;
const  int   M  = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1e8+9;
*/

int f[1009],g[1009];

int T,n,m;

int Solve()
{
    freopen("glasses.in","r",stdin);
     cin>>T;

     while(T--)
     {
        cin>>n>>m;
        for(int i=0;i<n;++i){cin>>f[i];}
        for(int i=0;i<m;++i){cin>>g[i];}

        sort(f,f+n);
        sort(g,g+m);
        cout<< f[0]+g[0] <<endl;

     }


return 0;
}





int main()
{
Solve();
return 0;
}

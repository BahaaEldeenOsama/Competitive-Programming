#pragma GCC optimize ("O3")
#include<iostream>
using namespace std;



/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : A. PUBG Game
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

long long int T,n;

int Solve()
{
    freopen("pubg.in","r",stdin);
     cin>>T;

     while(T--)
     {
        cin>>n;
        if(n<=5){cout<<0<<endl;}
        else{cout << n-5 <<endl;}
     }


return 0;
}





int main()
{
Solve();
return 0;
}

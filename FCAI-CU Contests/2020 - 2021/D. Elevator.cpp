#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;



/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : C. Elevator
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

int arr[109];
int n,m,val,T;


int Solve()
{
     cin>>T;

     while(T--)
     {

        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            arr[i]= abs(val-m);
        }
         sort(arr,arr+n);
         cout<<arr[n-1]<<endl;
     }


return 0;
}





int main()
{
Solve();
return 0;
}

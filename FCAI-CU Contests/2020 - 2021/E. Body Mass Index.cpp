#pragma GCC optimize ("O3")
#include<iostream>
#include<algorithm>
#include<vector>
#include <iomanip>
using namespace std;



/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : E. Body Mass Index
/// Method                : IM
/// Online judge          : CF
/// Date                  : 20/10/2020
///****************************************************************************************************************************************///

const  int   N  = (int) 1e3+100;

/*const  int   M  = (int) 1e4+4;
const  int  INF = (int) 0x3f3f3f3f;
const double ESP = 1e-7;
const ll MOD=1e8+9;
*/
int T;
double w,h;

int Solve()
{
    freopen("bmi.in","r",stdin);

    cin>>T;
    while(T--)
    {
       double res=0;
       cin>>w>>h;
       //cout << fixed<<setprecision(5)<< (w/(h*h)) <<endl;
       if( 19<= (w/(h*h)) && (w/(h*h)) <=25)
       {
          cout<<fixed<<setprecision(5)<<res<<endl;

       }
       else
       {
            if((w/(h*h))>25)
            {
                res = (h*h*25)-w;
                cout<<fixed<<setprecision(5)<<res<<endl;

            }
            else
            {
                res = (h*h*19)-w;
                cout<<fixed<<setprecision(5)<<res<<endl;

            }
       }


    }





return 0;
}





int main()
{
Solve();
return 0;
}

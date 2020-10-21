#pragma GCC optimize ("O3")
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Problem name          : C. Shake Hand Trip
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

int cnt=0;

vector<int>cities;

int T,n,m,val;

int Solve()
{
    freopen("shakehand.in","r",stdin);
     cin>>T;

     while(T--)
     {
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>m;
            for(int j=0; j<m;++j)
            {
                cin>>val;
                cities.push_back(val);
            }
        }

        sort(cities.begin(),cities.end());
        int sz=cities.size();
        for(int i=0;i<sz;++i)
        {
            for(int j=i+1;j<sz;++j)
            {
                if(cities[i]==cities[j])
                {
                    ++cnt;
                }
            }
        }
        cout<<cnt<<endl;
        cnt=0;


     }


return 0;
}





int main()
{
Solve();
return 0;
}

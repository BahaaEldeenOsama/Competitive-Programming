/*
  Team :
  Bahaa El-Deen Osama
  Marwan Galal
  Mohamned Sadd
*/

///a = 97  z = 122
///A = 65  Z = 90
 
#include <bits/stdtr1c++.h>
 
using namespace std;
 
#define endl            "\n"
#define pb              push_back
#define all(v)            ((v).begin()), ((v).end())
#define sz(v)            ((int)((v).size()))
#define ll              long long
#define rep(i,n)        for(int i=0 ; i<sz(n) ; i++)
#define lp(i, n)        for(int i = 0 ; (int)i<n ; i++)
#define loop(i, x, n)   for(int i=x ; (int)i<=n ; i++)
typedef vector<int> vi;
typedef deque<int> de;
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t , n , x , y;
    cin>>t;
    lp(i,t)
    {
        cin>>n>>x>>y;
        if(x+y>=n)
        {
            if(min(x-1,y)>=n/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

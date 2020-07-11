/* 
   team :
   1)Bahaa El-Deen Osama
   2)Mohamed Saad
   3)Marwan Galal
   
*/

///a = 97  z = 122
///A = 65  Z = 90
 
#include <bits/stdtr1c++.h>
 
using namespace std;
 
#define endl            "\n"
#define pb              push_back
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define ll              long long
#define rep(i,n)        for(int i=0 ; i<sz(n) ; i++)
#define lp(i, n)        for(int i = 0 ; (int)i<n ; i++)
#define loop(i, x, n)   for(int i=x ; (int)i<=n ; i++)
 
typedef vector<int> vi;
typedef deque<int> de;
 
const int N = 200;
int t;
ll a, b, dv;
vector<ll> arr[5];
 
ll power(int base, int p)
{
    if(p == 0) return 1;
    long long n = base;
    lp(i, p-1)
        n *= base;
    return n;
}
 
bool special(ll n)
{
    ll pw = int(log10(abs(n)));
    dv = power(10, pw);
    return (n % dv == 0);
}
 
void gen(ll n, int i)
{
    while(!special(n))
    {
 
        ll x = n % dv;
        arr[i].pb(n - x);
        n = x;
    }
    arr[i].pb(n);
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        arr[0].clear(); arr[1].clear();
        gen(a, 0);
        gen(b, 1);
        rep(i, arr[0])
        {
            if(i > 0)
                cout << " + ";
            rep(j, arr[1])
            {
                if(j == 0) cout << arr[0][i] << " x " << arr[1][j];
                else cout << " + " << arr[0][i] << " x " << arr[1][j];
            }
        }
        cout << endl;
    }
    return 0;
}

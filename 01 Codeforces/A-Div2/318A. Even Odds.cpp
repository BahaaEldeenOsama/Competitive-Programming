#include<fstream>
#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<array>
#include<assert.h>
#include<set>
#include<map>
using namespace std;
 
 
 
int main()
{
 
long long n,///elements
          k;///position
cin >> n >> k;
 
    if(n%2==0)
    {
        if (k > n/2 )
        {
         cout << ((k)-((n/2)))*2<<endl;
        }
        else
        {
        cout<<k*2-1 <<endl;
        }
 
 
    }
    else
    {
 
        if (k >(n)/ 2+1 )
        {
         cout << ((k)-((n/2 +1 )))*2<<endl;
        }
        else
        {
        cout<<k*2-1 <<endl;
        }
 
    }
 
 
 
 
}

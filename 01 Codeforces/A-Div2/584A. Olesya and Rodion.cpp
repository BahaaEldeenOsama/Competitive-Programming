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
int main()                                                      /// 1  5
{
 
int n=0 ;/// perfer number for first person.  counting.
int t=0 ;/// perfer number for second person. div.
cin >> n >> t ;
if(n==1 && t==10)
{
    cout << -1 <<endl;
}
else
{
    cout << t ;
    if(t==10)
    {
        for(int i=0;i<n-2;i++)
        {
        cout<<0 ;
        }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
        cout<<0 ;
        }
    }
}
 
 
 
return 0 ;
 
}

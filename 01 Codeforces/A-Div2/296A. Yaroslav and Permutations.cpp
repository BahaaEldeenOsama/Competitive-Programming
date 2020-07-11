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
#include<valarray>
#include<sstream>
#include<functional>
#include<utility>
#include<numeric>
#include<iterator>
#include<bitset>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
 
int n=0 ;
int arr[10001];
 
 
cin>>n ;
for (int i=0 ;i<n;i++)
{
    cin >> arr[i] ;
}
bool valid = true ;
 
for (int i=0;i<n;i++)
{
    int c=0 ;
    for(int j=0 ;j<n;j++)
    {
 
        if(arr[i]==arr[j])
        {
         ++c ;
        }
    }
    if( n < 2*c-1)
    {
        valid=false ;
        break ;
    }
}
 
if(valid){cout << "YES"<<endl;}
else{cout << "NO"<<endl;}
 
 
return 0;
}

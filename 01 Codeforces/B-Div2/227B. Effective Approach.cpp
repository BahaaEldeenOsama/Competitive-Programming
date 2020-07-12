#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
#include<cmath>
using namespace std;
 
 
int a[100000];
int b[100000];
int index[100000];
 
 
 
 
int main()
{
/*
int n=0;cin >>n;/// number of iteration.
int i=0,j=0; /// items of array.
int arr[n];/// array and elements .
int m=0; /// number of queries.
 
while(true)
{
int linear_search1=0,linear_search2=0 ;
        for (i=1;i<=n;i++)
        {
            cin>>arr[i];                                                                   ///inputs.
        }
 
        cin >> m ;
        int arr_M[m];
        for (int i=1;i<=m;i++)
        {
                 cin>>arr_M[i] ;
        }
 
 
        while(m!=0)
        {
 
       /// first algorithm.
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=m;j++)
            {
 
             if(arr_M[j] ==arr[i] )
                {
                    linear_search1+=i;
                              break;
                }
                else
                {
                             continue ;
                }
            }
        }
        /// second algorithm.
        for (i=n;i>=1;i--)
        {
                for (j=1;j<=m;j++)
                {
                        if(arr_M[j] !=arr[i] )
                        {
                              continue;
                        }
                        else
                        {
                           linear_search2++;
                        }
 
                }
     }
 
        m--;
        }
 
cout << linear_search1<< " " << linear_search2  ;
 
}
*/
 
 
 
 
int n=0;
cin >>n ;
for (int i=0;i<n;i++)
{
   cin >> a[i];
   index[a[i]]=i+1;
}
 
int m=0;
long long v=0,p=0;
cin >> m ;
for (int i=0 ;i<m;i++)
{
    cin>>b[i] ;
    v+=index[b[i]] ;
    p+=n-index[b[i]] +1;
}
 
cout << v << "  " << p <<endl;
 
 
 
return 0;
}

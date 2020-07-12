#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
 
int arr[100000];
int n=0;cin>>n;
 
int T=0;///True.
int F=0;///False.
for (int i=0;i<n;i++)
{
    cin>> arr[i] ;
}
sort(arr, arr+n );
for (int i=0;i<n -2 ;i++)
{
    if (arr[i]+arr[i+1] >arr[i+2])
    {
        cout << "YES" <<endl;
        return 0;
    }
}
 
cout << "NO" <<endl;
    return 0;
}

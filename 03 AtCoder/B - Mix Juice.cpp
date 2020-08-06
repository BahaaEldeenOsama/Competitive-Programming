#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : G - Mix Juice
/// Method                : brute force
/// Online judge          : vjudge(Contest)
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///


vector<int>vec;
int k,sum=0,n,val;

int main()
{
cin>>n>>k;
for(int i=0;i<n;++i)
{
    cin>>val;
    vec.push_back(val);
}
sort(vec.begin(),vec.end());
for(int j=0 ;j<k;++j)
{
    sum+=vec[j];
}
cout <<sum <<endl;




return 0;
}

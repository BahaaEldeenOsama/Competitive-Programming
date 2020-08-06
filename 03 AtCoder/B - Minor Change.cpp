#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : K - Minor Change
/// Method                : brute force
/// Online judge          : vjudge(Contest)
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///



string s1,s2;
int cnt=0;

int main()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.length();++i)
    {
        if(s1[i]!=s2[i])
        {
            ++cnt;
        }
    }
    cout <<cnt<<endl;




return 0;
}

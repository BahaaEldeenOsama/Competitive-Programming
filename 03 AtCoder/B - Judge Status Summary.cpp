#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : B - Judge Status Summary
/// Method                : brute force
/// Online judge          : vjudge(Contest)
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///

string str;
int n,AC=0,WA=0,TLE=0,RE=0;

int main()
{

cin>>n;
for(int i=0 ; i<n ;i++)
{
    cin>>str;
    if(str == "AC"){++AC;}
    else if(str == "WA"){++WA;}
    else if(str == "TLE"){++TLE;}
    else if (str == "RE"){++RE;}
}






cout << "AC" << " x " << AC <<endl;
cout << "WA" << " x " << WA <<endl;
cout << "TLE" << " x " << TLE <<endl;
cout << "RE" << " x " << RE <<endl;



return 0;
}

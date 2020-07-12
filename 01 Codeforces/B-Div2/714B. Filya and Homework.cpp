#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<deque>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<stdio.h>
#include<string.h>
#include<iterator>
using namespace std;
 
 
void fast()
{
	std::ios_base::sync_with_stdio(0);
}
 
 
 
int main()
{
int n=0, x=0 ;cin>>n ;
set<int>s ;
for(int i=0 ;i<n ;i++)
{
    cin >>x;
    s.insert(x);
}
if (s.size()<3)
{
    cout << "YES"  <<endl;
}
else if(s.size()>3)
{
    cout << "NO"  <<endl;
}
 
else
{
int arr[3] = { *s.begin() , *(++(s.begin())) , *(--(s.end()))   } ;
 
if(arr[1]-arr[0] == arr[2]-arr[1] )
{
    cout << "YES" <<endl;
}
else
{
    cout << "NO"  <<endl;
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
return 0;
}
 

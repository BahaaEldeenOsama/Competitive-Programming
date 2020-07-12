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
 
 
 
 
int main()
{
 
int a=0,b=0;
///        row  col
int x,y;cin>>x >>y;
string  str ;
set<int>s;
while(x--)
{
 
    cin>>str ;
    a=str.find('G');
    b=str.find('S');
 
    if((a-b) > 0 ){cout << -1 <<endl;return 0 ;}
     s.insert(a-b);
}
cout << s.size()<<endl;
 
return 0;
}
 

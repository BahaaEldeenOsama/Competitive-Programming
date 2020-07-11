#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
int n=0 , x=0 ;
cin >> n ;
string s ;
while(n>0)
{
cin >> s ;
if(s[1]=='+')
{
          x++ ;
}
else
          x--;
n-- ;
}
cout << x ;
return 0;
}

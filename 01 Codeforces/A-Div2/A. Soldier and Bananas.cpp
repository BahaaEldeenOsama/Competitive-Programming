#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
int k=0,n=0,w=0,s=0;
cin >>k>>n>>w ;
for(int i=1 ;i<=w ; i++)
{
       s+=i*k ;
}
if(s>n)
{
          cout << s-n <<endl;
}
else
          cout << "0" <<endl;
 
return 0;
}

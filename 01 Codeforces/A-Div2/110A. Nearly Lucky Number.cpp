#include <iostream>
using namespace std;
 
int main()
{
long long n=0 ;
long long x=0 ;
cin>>x ;
while (x>0)
{
          if(x%10==4 || x%10==7)
          {
                    n++;
          }
 
x=x/10;
}
if(n==4 || n==7)
{
          cout << "YES" <<endl;
}
 
else
{
          cout << "NO"<<endl;
}
 
 
 
 
 
return 0;
}

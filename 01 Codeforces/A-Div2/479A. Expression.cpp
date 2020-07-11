#include<iostream>
using namespace std  ;
 
 
 
 
 
int main()
{
int x,y,z ;
 
cin >> x >> y >> z ;
cout << max(x+y+z ,max(x*y*z,max(((x+y)*z),x*(y+z)))) << endl ;
 
 
}

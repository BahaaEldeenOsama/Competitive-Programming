#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
int n=0      ;
int Count =0 ;
int x =0       ;
int y =0       ;
 
cin >> n ;
for (int i=0 ; i<n ;i++)
{
 
cin >> x >> y ;
 
if (x<=(y-2))
{
 
          Count++ ;
}
 
}
cout << Count <<endl;
 
 
return 0;
}

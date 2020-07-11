#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
 
int main()
{
int n=0 , Count=0 ;
char s[50]    ;
cin>> n >> s  ;
for(int i=0 ; i<n-1 ;i++ )
{
          if (s[i] == s[i+1])
                    Count++ ;
}
cout << Count <<endl;
 
 
return 0;
}

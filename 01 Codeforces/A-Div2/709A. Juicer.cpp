#include<fstream>
#include<iostream>
#include<math.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<array>
#include<assert.h>
 
using namespace std;
int main()
{
 
long double n=0 ; /// number of orange.
long double s=0 ;/// size of orange.
 
long double b=0 ;/// Juicer.
long double d=0 ;/// Juicer Waste.
long double e=0 ;/// empty Juicer waste.
 
int output=0 ; /// number of empty Juicer waste.
 
cin >> n >>b >>d ;
for (int i=0 ; i<n ; i++)
{
    cin >> s ;
 
    if (s>b  )
    {
      continue ;
    }
    else
    {
        e+=s;
        if(e>d)
        {
            ++output;
            e=0;
        }
 
    }
 
 
}
cout << output <<endl;
 
}

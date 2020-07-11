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
#include<set>
#include<map>
using namespace std;
int main()
{
int n=0 ;
long long sum=0;
string s ="Null";
int a=0 ;
int c=0 ;
cin >> n >> sum ;
 
while(n-->0)
{
        cin >>s ;
        cin >>a;
 
        if(s=="+")
        {
            sum+=a;
        }
        else if(s=="-")
        {
          if(sum<a)
          {
              ++c ;
          }
          else
          {
              sum-=a ;
          }
        }
}
cout << sum << " " << c <<endl;
 
 
 
 
}
 

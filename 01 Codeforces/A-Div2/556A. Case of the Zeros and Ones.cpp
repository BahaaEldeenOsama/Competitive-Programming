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
    int n =0;
    cin >> n;
    string s ="NULL";
    cin >> s ;
    long long output_1=0;
    long long output_2=0;
    for(int i=0 ;i<s.length() ;i++)
    {
       if(s[i]=='0')
       {
           output_1++;
       }
       else {output_2++;}
    }
cout<< abs(output_1-output_2)<<endl;
 
 
return 0 ;
}

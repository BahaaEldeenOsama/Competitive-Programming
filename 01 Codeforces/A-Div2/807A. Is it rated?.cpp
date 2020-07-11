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
int persons=0 ;
cin >> persons ;
int a =0;
int b =0;
cin >> a >> b ;
int temp=b ;
int count_1=0 ,count_2=0 ;
 
for (int i=0;i<persons-1;i++)
{
    if(a!=b){count_1++;}
    cin >> a >> b ;
    if(a!=b){count_1++;}
    if (b>temp){count_2++;}
    temp=b;
}
if(count_1!=0){cout << "rated"<<endl;}
else if(count_2!=0){cout << "unrated"<<endl;}
else{cout << "maybe"<<endl;}
 
return 0 ;
}

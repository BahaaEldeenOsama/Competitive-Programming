#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cctype>
using namespace std ;
 
int main()
{
 string name1 ;
 string name2 ;
 cin>>name1;
 cin>>name2;
 
 for(int i=0 ; i<name1.length();i++)
  {
    name1[i]=tolower(name1[i]);
    name2[i]=tolower(name2[i]);
  }
 if(name1.compare(name2)==0){cout << "0"<<endl;}
 if(name1.compare(name2)>0){cout << "1"<<endl;}
 if(name1.compare(name2)<0){cout << "-1"<<endl;}
 
 
 
}

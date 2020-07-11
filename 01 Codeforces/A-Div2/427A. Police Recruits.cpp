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
 
int numbers_crim=0 ;
int input=0;
int count_crime =0 ;
int output=0 ;
 
cin >> numbers_crim ;
for(int i=0 ;i<numbers_crim;i++)
{
 
    cin>>input ;
    if(input>0)
        {
            count_crime+=input;
        }
    else if(input<0)
    {
       if(count_crime>0)
       {
           count_crime-- ;
       }
       else
       {
           output++ ;
       }
 
    }
 
 
}
cout << output <<endl;
 
 
 
 
 
 
 
}

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
 
 string word ;
 cin >>word ;
 int upp=0;
 int low=0;
 for(int i=0 ;i<word.length();i++)
 {
     if(word[i]==toupper(word[i]))
     {
         upp++;
     }
     if(word[i]==tolower(word[i]))
     {
         low++;
     }
 }
 
 if(upp>low)
 {
     for(int i=0 ; i<word.length();i++)
     {
         word[i]=toupper(word[i]);
     }
 }
 if(upp<=low)
 {
     for(int i=0 ; i<word.length();i++)
     {
         word[i]=tolower(word[i]);
     }
 
 }
 
cout<< word <<endl;
 
 
 
 
}

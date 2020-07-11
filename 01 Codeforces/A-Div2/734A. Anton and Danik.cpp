#include<iostream>
using namespace std  ;
 
 
 
int main()
{
 
int count_A=0 ;
int count_D=0 ;
int n ;
cin >> n ;
char s ;
 
for(int i=0 ; i<n ; i++)
{
 
    cin >> s ;
 
    if (s=='A')
    {
      count_A++ ;
 
    }
    if(s=='D')
    {
        count_D++ ;
    }
 
 
}
 
 
if (count_A>count_D){cout << "Anton"<<endl;}
if(count_D>count_A){cout<<"Danik"<<endl;}
if(count_D==count_A) {cout << "Friendship"<<endl;}
 
 
 
 
 
}

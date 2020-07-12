#include<iostream>
#include<algorithm>
 
using namespace std;
 
 
 
int main()
{
int loops=0 ;cin>> loops;
int items[1000] ;
int max0=0;
int i=0  ,j=0 ;
int sum=0;
 
 
for (int i=0 ;i<loops;i++){cin >> items[i] ;}
 
for (int i=0 ;i<loops;i++)
{
max0=1;
j=i-1;/// before
while(j>=0 && items[j+1] >= items[j]  ){max0++;j--;}
j=i+1;///after.
while(j<loops && items[j] <=items[j-1]){max0++;j++;}
sum = max(max0,sum);
}
 
cout << sum <<endl;
    return 0;
}

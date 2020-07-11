#include<iostream>
#include<algorithm>
using namespace std  ;
 
 
 
int main()
{
int Size ;
cin >> Size ;
int arr[1000] ;
for (int i=0 ;i<Size ;i++)
{
    cin >> arr[i] ;
 
}
 
sort(arr,arr + Size) ;
 
for (int i=0 ;i<Size ;i++)
{
 
    cout <<arr[i]  << " " ;
}
 
}

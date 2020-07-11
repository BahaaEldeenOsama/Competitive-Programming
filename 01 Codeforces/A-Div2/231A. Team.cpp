#include<iostream>
using namespace std  ;
 
 
 
int main()
{
 
int Size ;
cin >> Size ;
int x , y ,z ;
int Count_Sum =0 ;
for(int i=0 ; i<Size ; i++)
{
    cin >> x >> y >> z ;
 
    if ((x==1 && y==1) || (x==1 && z==1) || (y==1 && z==1) )
    {
 
        Count_Sum++ ;
    }
 
}
if (Count_Sum>=1){cout<<Count_Sum<<endl;}
else{cout << 0 <<endl;}
 
 
 
 
 
}

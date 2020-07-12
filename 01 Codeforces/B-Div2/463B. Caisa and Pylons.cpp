#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 
int energy=0,dolars=0,n,h[1000000] ;
cin >>n;
 
///********************///
for (int i=0 ; i<n ;i++)
{
    cin>>h[i] ;
}
 
///*********************///
dolars = h[0];
///*********************///
 
 
for (int i=0;i<n-1;i++)
{
 
 
            if(h[i]>=h[i+1])
                {
                  energy += h[i]-h[i+1];
                }
          else
              {
                  if (energy >=h[i+1]-h[i])                                               /// condition if exist energy.
                  {
                      energy-=h[i+1]-h[i];
                  }
                  else
                  {
                      dolars+=(h[i+1]-h[i]) - energy ;
                      energy=0;
 
                  }
 
              }
}
 
cout << dolars <<endl;
 
 
 return 0;
}

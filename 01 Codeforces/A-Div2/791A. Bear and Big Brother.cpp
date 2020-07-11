#include<iostream>
#include<cstring>
#include<string>
using namespace std ;
 
int main()
{
 int bob=0 ;
 int Limak=0 ;
 int year_limake=0 ;
 cin >> Limak >> bob ;
 
 if(Limak<bob)
 {
     for(int i=0 ; i<bob ; i++)
     {
      ++year_limake ;    ///4   9    ______12   18 _____36  36____
      bob = bob *2   ;
      Limak =Limak *3;
      if(Limak>bob)
      {
          break;
      }
 
 
     }
 
     cout << year_limake<<endl;
 }
else if(Limak==bob){cout << 1 <<endl;}
 
 
 
 
}

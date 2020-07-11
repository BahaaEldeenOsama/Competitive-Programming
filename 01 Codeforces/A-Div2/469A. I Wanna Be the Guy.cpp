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
 
long long levels=0            ;
long long player_1=0          ;
long long player_2=0          ;
long long achivement_Player1_2=0;
long long pass[100]={0};
 
cin >> levels ;
cin >>player_1;
for (int i=0 ;i<player_1;i++)
{
    cin >> achivement_Player1_2; pass[achivement_Player1_2-1]++;
}
cin >>player_2 ;
for(int i=0 ;i<player_2;i++)
{
    cin >> achivement_Player1_2; pass[achivement_Player1_2-1]++;
}
for(int i=0 ;i<levels;i++)
{
  if(pass[i]==0){cout<<"Oh, my keyboard!"<<endl;return 0;}
}
cout <<"I become the guy."<<endl;
return 0;
}

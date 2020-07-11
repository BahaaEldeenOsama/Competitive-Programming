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
 int B[4] ;
 int A[4][10000];/// row >>> col
 
int main()
{
int students =0 ;
int fivourt_subject=0;
int teams=0;
 
 
cin >> students ;
 
for(int i=1 ;i<=students;i++)
{
    cin >>  fivourt_subject ;
    B[fivourt_subject]++ ;
    A[fivourt_subject][B[fivourt_subject]]=i;
 
}
teams=min(min(B[1],B[2]),B[3]);
cout << teams <<endl;
for(int i=1 ;i<=teams;i++)
{
    cout << A[1][i]<< " "<< A[2][i]<< " "<< A[3][i]<<endl;
}
 
}
 

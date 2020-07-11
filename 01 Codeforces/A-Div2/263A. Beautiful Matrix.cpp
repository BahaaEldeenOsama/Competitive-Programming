#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std ;
 
int main()
{
 
 
int matrix[5][5] ;
int Count_ways=0 ;
for(int i=0 ; i<5 ; i++)
{
    for(int j=0 ; j<5 ; j++ )
    {
        cin >> matrix[i][j] ;
        if(matrix[i][j]==1)
        {
            Count_ways=abs(i-2)+abs(j-2) ;
            break ;
        }
 
    }
}
cout<< Count_ways <<endl;
 
 
}

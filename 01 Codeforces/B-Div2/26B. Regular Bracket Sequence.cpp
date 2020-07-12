#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<deque>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<stdio.h>
#include<string.h>
using namespace std;
 
 
 
 
int main()
{
 
string input ;cin >> input;
int Count=0 ;
int total=0 ;
    for(int i=0 ; i<input.length();i++)
    {
        if (input[i]=='(')
        {
            Count++;
        }
        else if(Count>0)
        {
            Count--;
            total+=2;
        }
    }
 
cout << total <<endl;
 
return 0;
}
 

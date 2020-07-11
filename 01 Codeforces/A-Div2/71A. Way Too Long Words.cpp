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
 
int n=0 ;
string word = "Null" ;
cin >> n;
for (int i=0; i<n;i++)
{
    cin >> word ;
    if (word.length() > 10)
    {
     cout << word[0]<<word.length()-2<<word[word.length()-1] <<endl;
    }
    else
    {
        cout << word <<endl;
    }
 
}
 
 
 
 
 
 
 
 
 
 
 
}
 
 

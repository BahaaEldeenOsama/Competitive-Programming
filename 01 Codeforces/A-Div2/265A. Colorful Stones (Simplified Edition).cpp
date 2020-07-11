#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
 
 
 
 
int main()
{
 
 
/*
string input1 ,input2 ;
cin >> input1;
cin >> input2;
 
size_t counting=0 ;
 
for(size_t i=0 ;i<input2.length();i++)
{
 
    if(input1[i]==input2[counting])
    {
         counting+=1;
    }
}
 
 
cout << counting+1 <<endl;
}
*/
 
 
 string s, t;
    cin >> s >> t;
    size_t pos = 0;
    for (size_t i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    cout << pos + 1 << endl;
 
 
return 0;
}

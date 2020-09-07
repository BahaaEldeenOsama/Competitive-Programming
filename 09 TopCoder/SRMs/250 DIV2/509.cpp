#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


/// Info.
///****************************************************************************************************************************************///
/// Author                : BAHAA El_DEEN OSAMA
/// Date                  : 7/9/2020
///****************************************************************************************************************************************///



class PalindromizationDiv2 {
public:
     bool Cheak(int n)
     {
          string str = to_string(n);
          for(int i=0;i<str.size();++i)
          {
               if(str[i] != str[ (str.size()-1) - i ] )
               {
                    return false;  
               }
          }  
         return true;                 
     }	

	int getMinimumCost(int X) {
		
		int infinity = 1000000000;
		for(int i=0;i<=200000;++i)
		{
		    if(Cheak(i))
		    {
		       infinity = min(infinity,abs(X-i));
		    }
		}
		
		return infinity;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

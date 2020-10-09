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

using namespace std;


class LISNumberDivTwo {
public:
    bool check_increasing(vector <int> seq)
    {
       for(int i=0;i<seq.size()-1;++i)
      {
        if(seq[i]<seq[i+1])
        {
            return false;
        }
      }     
        return true;
    }
    bool check_decreasing(vector <int> seq)
    {
      for(int i=0;i<seq.size()-1;++i)
      {
        if(seq[i]>seq[i+1])
        {
            return false;
        }
      }    
        return true;
    }
    
    
	int calculate(vector <int> seq) 
	{
	     int cnt=0;
	     for(int i=0;i<seq.size()-1;++i)
	     {
	          if(seq[i]>=seq[i+1] )
	          {
	               ++cnt;
	          } 
	     }
	     ++cnt;
	     
	  return cnt;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

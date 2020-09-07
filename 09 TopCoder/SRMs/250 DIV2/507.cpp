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


/// Info.
///****************************************************************************************************************************************///
/// Author                : BAHAA El_DEEN OSAMA
/// Date                  : 7/9/2020
///****************************************************************************************************************************************///


using namespace std;


class CubeAnts {
public:
	int getMinimumSteps(vector <int> pos) {
	   sort(pos.begin(),pos.end());
	      int res=0;
	      if(pos[pos.size()-1] == 0)
	      {
	        res =0;
	      }
	      else if (pos[pos.size()-1] == 1 || pos[pos.size()-1] == 3 || pos[pos.size()-1] == 4 )
	      {
	        res=1;
	      }						
	      else if(pos[pos.size()-1] == 2  || pos[pos.size()-1] == 5 || pos[pos.size()-1] == 7)												
	      {
	        res=2; 
	      }
	      else if(pos[pos.size()-1] == 6)
	      {
	       res=3;
	      }
	      
	      return res;		
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

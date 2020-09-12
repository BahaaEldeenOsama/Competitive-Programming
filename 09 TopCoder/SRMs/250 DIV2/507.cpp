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


class CubeAnts {
public:
	int getMinimumSteps(vector <int> pos) {
	   sort(pos.begin(),pos.end());
	      int res=-1;
	      for(int i=0;i<pos.size();i++)
	      {
	        if(pos[i]==0)
	        {
	         res = max(res,0); 
	        }
	        else if(pos[i]==3 || pos[i]==1 ||pos[i]==4 )
	        {
	           res= max(res,1);
	        }
	        else if(pos[i]==2 ||pos[i]==5||pos[i]==7)
	        {
	           res = max(res,2); 
	        }
	        else if(pos[i]==6)
	        {
	          res = max(res,3);
	        }
	      }  
	      
	      return res;		
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

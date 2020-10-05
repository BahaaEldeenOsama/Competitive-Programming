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


class WorkingRabbits {
public:
	double getEfficiency(vector <string> profit) 
	{	
		double res = 0.0;
		int cntPair=0;
		for(int i=0;i<profit.size();++i)
		{
		   for(int j=i+1;j<profit.size();++j)
		   {
		      ++cntPair;
		      res += profit[i][j] - '0';
		   }
		}
	
		if(res==0)
		{
		  return 0.0;
		}		
		
		return  res/cntPair;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

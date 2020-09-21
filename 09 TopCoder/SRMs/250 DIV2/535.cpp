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


class FoxAndIntegers {
public:
	vector <int> get(int AminusB, int BminusC, int AplusB, int BplusC) 
	{
	      if((AminusB+AplusB)%2)
	      {
	        return vector<int>();
	      }

		  int A = (AminusB+AplusB)/2;
		  int B = (BminusC+BplusC)/2;
		  int C = BplusC  -B;
		  
		  if((AminusB)!=A-B)
	      {
	        return vector<int>();
	      }
	      if((BminusC)!=B-C)
	      {
	        return vector<int>();
	      }
		 
		return {A,B,C};   		  		   		  		    		  		   		  		  
	}
};




<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

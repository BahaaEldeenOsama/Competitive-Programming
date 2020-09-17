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


class ANDEquation {
public:
	int restoreY(vector <int> A) 
	{        
	    for(int i=0 ;i<A.size();++i)
	    {
	        int n = 1048575;
	        for(int j=0;j<A.size();++j)
	        {
	            if(i!=j)
	            {
	              n&=A[j];
	            }
	        }
	        if(A[i]==n)
	        {
	         return n;
	        }
	    }  
      
	return -1;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

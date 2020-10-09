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


class InsertZ {
public:
	string canTransform(string init, string goal) {
	
    for(int i=0;i<goal.size();++i)
    {
            if(goal[i]=='z')
               {
                  goal.erase(i,1);
                 --i;
               }
    }

		if(goal==init)
		{
		   return "Yes";
		}
		else
		{
		    return "No";
		}
		
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

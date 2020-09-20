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


class RainyRoad{
public:
	string isReachable(vector <string> road) {
	
	for(int i=0;i<road[0].size();++i)
	{
	     if(road[0][i]=='W' && road[1][i]=='W')return "NO";
	}
	
	return "YES";
	
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

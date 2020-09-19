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


class GogoXBallsAndBinsEasy {
public:
	int solve(vector <int> T) {
		
		int res=0;
		sort(T.begin(),T.end());
		vector<int>vec=T;
		reverse(T.begin(),T.end());
		for(int i=0;i<T.size();i++)
		{
		    res+=max(0,vec[i]-T[i]);
		}
		return res;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

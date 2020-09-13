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


class MiniatureDachshund {
public:
	int maxMikan(vector <int> mikan, int weight) {
		
		sort(mikan.begin(),mikan.end());
		int cnt=0;
		for(int i=0;i<mikan.size();++i)
		{
		    if(weight+mikan[i]<=5000)
		    {
		      ++cnt;
		      weight+=mikan[i];
		    }
		}
		
		
		return cnt;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

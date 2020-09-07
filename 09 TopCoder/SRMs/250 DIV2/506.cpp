
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


/// Info.
///****************************************************************************************************************************************///
/// Author                : BAHAA El_DEEN OSAMA
/// Date                  : 6/9/2020
///****************************************************************************************************************************************///


class SlimeXSlimeRancher2 {
public:
	int train(vector <int> attributes) {
		
		long long res=0;
		sort(attributes.begin(),attributes.end());
		for(int i=0;i<attributes.size()-1;++i)
		{
		     res+= attributes[attributes.size()-1] - attributes[i];
		}
		return res;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

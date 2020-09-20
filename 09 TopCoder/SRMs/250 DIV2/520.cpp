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


class SRMRoomAssignmentPhase {
public:
	int countCompetitors(vector <int> ratings, int K) {
	      int cnt=0;
	      for(int i=1; i<ratings.size();++i)
	      {
	         if(ratings[0]<ratings[i])
	         {
	             ++cnt;
	         }
	      }
	     
	  return cnt/K;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

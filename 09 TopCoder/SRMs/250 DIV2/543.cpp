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


class EllysTSP {
public:
	int getMax(string places) {
	
	    int cnt_C=0;
	    int cnt_V=0;
	    int res=0;
	    for(int i=0 ;i<places.length();++i )
	    { 
	       if(places[i]=='C')
	       {
	           ++cnt_C;
	       }
	       else if(places[i]=='V')
	       {
	           ++cnt_V;
	       }
	    }
	    if(cnt_C==places.length() || cnt_V==places.length())
	    {
	       res=1;
	    }
	    else if(cnt_C==cnt_V)
	    {
	      res=cnt_V+cnt_C;
	    }
	    else
	    {
	       res = min(cnt_C,cnt_V) * 2 + 1 ;
	    }
	    
	    return res;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

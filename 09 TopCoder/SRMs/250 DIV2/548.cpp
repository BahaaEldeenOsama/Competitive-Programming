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


class KingdomAndDucks {
public:
	int minDucks(vector <int> duckTypes) {
		
		set<int>st;
		sort(duckTypes.begin(),duckTypes.end());
		int cnt = 0;
		vector<int>mx;
        for(int i =0 ; i<duckTypes.size();++i)
        {
           st.insert(duckTypes[i]);
           if(duckTypes[i]==duckTypes[i+1])
           {
            ++cnt;
           }
           else
           {
             mx.push_back(++cnt);
             cnt=0;
           }
        }
        sort(mx.begin(),mx.end());
        
      
      return st.size() * mx[mx.size()-1];  				  				
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

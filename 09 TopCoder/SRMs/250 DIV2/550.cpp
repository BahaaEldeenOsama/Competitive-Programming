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
#include <string>

using namespace std;


class EasyConversionMachine {
public:
	string isItPossible(string originalWord, string finalWord, int k) {
	
		
			int diff=0;
			 for(int i=0;i<finalWord.length();++i)
			 { 
			     if(finalWord[i]!=originalWord[i])
			     {
			       	 ++diff;  
			     }
			 }
			 
			 return (diff<=k  && (diff-k)%2==0 ) ? "POSSIBLE" : "IMPOSSIBLE" ;	
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

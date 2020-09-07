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



class TheAlmostLuckyNumbersDivTwo {
public:
	int find(int a, int b) {
		int res=0;
		///int arr[1000000];
		
		for(int i=min(a,b); i<max(a,b);++i)
		{
		   if( i%4==0  || i%7==0 )
		   {
		        ++res;
		   }  
		}
		
		return res;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

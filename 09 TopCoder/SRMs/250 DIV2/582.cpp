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


class SemiPerfectSquare {
public:
	string check(int n) 
	{
	    bool flag = false;
	    for(int a=2;a<n;++a)
	    {
	       for(int b=1;b<a;++b)
	       {
	           if(a*a*b==n)
	           {
	               flag = true;
	               break;
	           }  
	       }
	    }
	    
	    if(flag)
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

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


class NetworkXZeroOne {
public:
	string reconstruct(string message) 
	{	
	    int cnt=0;
	    for(int i=0;i<message.size();++i)
		{
		    if(message[i]=='?')
		    {
		      ++cnt;
		    }
		}
		
		    
		  while(cnt--)
		  {   
		     for(int i=0;i<message.size();++i)
	    	{
		    if(message[i]=='x' && message[i+1]=='?' )
		    {
		         message[i+1]='o';
		    }
		    else if(message[i]=='?' && message[i+1]=='x' )
		    {
		       message[i]='o';
		    }
		    else if(message[i]=='?' && message[i+1]=='x' )
		    {
		       message[i]='o';
		    }
		    else if(message[i]=='o' && message[i+1]=='?' )
		    {
		       message[i+1]='x';
		    }
		    else if(message[i]=='?' && message[i+1]=='o' )
		    {
		       message[i]='x';
		    }    
		    }
		  }
		  
		  
		
	
		
		
		return message;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

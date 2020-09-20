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


class FortunateNumbers {
public:
	int getFortunate(vector <int> a, vector <int> b, vector <int> c) {
			   
	
	           set<int>st;
	         	for(int i=0;i<a.size();++i)
	         	{
	         	   int sum=0;
	         	   for(int j=0;j<b.size();++j)
	         	   {
	         	      for(int k=0;k<c.size();++k)
	         	      {
	                      sum=a[i]+b[j]+c[k];
	                      stringstream ss;
						  ss << sum;
						  string str = ss.str();
						  int cnt58=0;
						  for(int cc=0 ;cc<str.size();++cc)
						  {
						    if(str[cc]=='5'||str[cc]=='8'){++cnt58;}

						  }
						  if(cnt58==str.size())
						  {
						    int num = stoi(str);
						    st.insert(num);
						  }
	         	      }
	         	   }
	         	}

             return st.size();
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

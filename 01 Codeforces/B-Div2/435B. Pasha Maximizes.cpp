#include <iostream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<complex>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
#include <iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
#include<map>
#include<stack>
#include<sstream>
#include<queue>
#include<list>
#include<iomanip>
#include<bitset>
#include<limits.h>
using namespace std;
 
int main()
{
 
string s;
	int k;
	cin>>s>>k;
	for(int i=0;i<s.size()-1;i++)
		if(k>0){
			int cor=i;
			for(int j=i+1;j<s.size() && k-j+i>=0;j++)
				if(s[cor]<s[j])
					cor=j;
			for(int j=cor;j>i;j--)
				swap(s[j],s[j-1]);
			k-=cor-i;
		}
	cout<<s;
 
    return 0;
}

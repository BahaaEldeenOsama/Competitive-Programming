#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
 
    int n=0, x, i, ans=1;
	string s;
	cin>>s;
	if(s.length()==1)
	{
		cout<<"0";
		return 0;
	}
	for(i=0; i<s.length(); i++)
		n+=s[i]-'0';
	while(n>9)
	{
		x=n, n=0;
		while(x>0)
			n+=x%10, x/=10;
		ans++;
	}
	cout<<ans;
return 0;
}

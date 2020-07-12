#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
long long n,m,c,cc,sum=0,k=0;
long long a[100001];
int main(){
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		cin>>c>>cc;
		sum+=min(c,cc);
		if(c*2>cc)a[b]=max(k,cc-c);
		 else a[b]=c;
	}
	sort(a+1,a+n+1);
	for(int b=n;b>n-m;b--)sum+=a[b];
	cout<<sum;
}

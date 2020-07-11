#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
/*
int n  ;
 
int x1 ;
int y1 ;
int z1 ;
 
int arr[3] ={0} ;
cin >> n ;
 
for (int i=0 ;i < n ; i++)
{
          cin >> x1 >> y1 >> z1 ;
 
          arr[0] +=x1 ;
          arr[1] +=y1 ;
          arr[2] +=z1 ;
}
 
if(arr[0]==arr[1] && arr[0]==arr[2]  )  cout << "YES"<<endl;
else cout << "NO" <<endl;
 
*/
 
 
 
 
 
int n,x,y,z,sum[3]={0};
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x>>y>>z;
		sum[0]+=x;
		sum[1]+=y;
		sum[2]+=z;
	}
	sum[0]==0&&sum[1]==0&&sum[2]==0?cout<<"YES":cout<<"NO";
 
 
 
 
 
return 0;
}

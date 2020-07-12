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
#include<cmath>
using namespace std;
/*
int x_axis[]={ -1,0,1,0};
int y_axis[]={ 0,1,0,-1};
char room[102][102];
set<char>ans;
int n=0, m=0 ;
char c ;
*/
int n, m;
char col;
 
bool valid(int x, int y)
{
	return x > -1 && x<n&&y>-1 && y < m;
}
 
int dirx[] = { -1,0,1,0 };
int diry[] = { 0,1,0,-1 };
char room[101][100];
set<char> ans;
int main()
{
/*
cin>>n>>m>>c;
for (int i=0 ;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>room[i][j];
    }
}
 
for (int i=0 ;i<n;i++)
{
    for (int j=0;j<m;j++)
        {
            if (room[i][j] == c )
            {
                for (int k=0 ;k<4;k++)
                {
                 int  To_X=i+x_axis[k];
                 int  To_Y=j+y_axis[k];
 
                 if(room[To_X][To_Y]!=c && room[To_X][To_Y]!='.')
                 {
                     ans.insert(room[To_X][To_Y]);
                     cout <<endl;
                 }
 
                }
 
            }
 
     }
}
 
cout << ans.size() <<endl;
*/
 
 
 
	cin >> n >> m >> col;
 
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> room[i][j];
 
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (room[i][j] == col)
				for (int k =0 ; k < 4; k++)
				{
					int tox = i + dirx[k];
					int toy = j + diry[k];
					if (valid(tox, toy) && room[tox][toy] != col && room[tox][toy] != '.')
						ans.insert(room[tox][toy]);
				}
		}
	cout << ans.size() << endl;
 
return 0;
}

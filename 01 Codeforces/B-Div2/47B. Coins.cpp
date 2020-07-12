#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<deque>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<stdio.h>
#include<string.h>
#include<iterator>
#include<stdio.h>
using namespace std;
/*
void fast()
{
	std::ios_base::sync_with_stdio(0);
}
*/
 
int main()
{
 
	int a[3]={0},i;
	char b,c,d;
	for(i=1;i<=3;i++)
	{
		scanf(" %c%c%c",&b,&c,&d);
		if(c=='>') a[b-'A']++;
		if(c=='<') a[d-'A']++;
	}
	if(a[0]>a[1]&&a[1]>a[2]) printf("CBA\n");
	else
		if(a[0]>a[2]&&a[2]>a[1]) printf("BCA\n");
		else
			if(a[1]>a[2]&&a[2]>a[0]) printf("ACB\n");
			else
				if(a[1]>a[0]&&a[0]>a[2]) printf("CAB\n");
				else
					if(a[2]>a[1]&&a[1]>a[0]) printf("ABC\n");
					else
						if(a[2]>a[0]&&a[0]>a[1]) printf("BAC\n");
						else printf("Impossible\n");
 
return 0;
}
 

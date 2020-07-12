#include<iostream>
#include<stdio.h>
#include<memory.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<iterator>
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
#include<map>
#include<sstream>
#include<stdio.h>
#include<stdio.h>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
 
/// Info.
///****************************************************************************************************************************************///
/// I am studying Computer Science at Cairo University.
/// Programmer   : BAHAA El_DEEN OSAMA SAYED.
/// G-mail       : BEOSAMACS98@GMAIL.COM
/// Problem name :(H) The Dueling Philosophers Problem.(UVA)
/// Algorithm    : BFS.
/// Date         : 3/7/2019.
///****************************************************************************************************************************************///
 
 
 
///defines
///****************************************************************************************************************************************///
#define rep(i,v)         for(int i=0;i<SZ(v);++i)
#define all(v)           ((v.begin()),((v.end())
#define mm(v,d)          memset(v,d,sizeof(v))
#define lp(i,v)          for(int i=0;i<sizeof(v);++i)
#define lpi(i,j,n)       for(int i=(j);i>=(int)n;++i)
#define lpd(i,j,n)       for(int i=(j);i>=(int)n;--i)
#define MP               make_pair
#define SZ(v)            ((int) ( (v).size() ) )
#define ull              unsigned long long
#define ll               long long
#define pi               3.1415926536
#define oo               1e9
#define OO               1e19
#define Fx(n)            fixed<<setprecision(n)
#define Faster           std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define RE0              return 0
#define RE1              return 1
#define mp(a,b)          make_pair(a,b)
#define X                first
#define Y                second
#define pii           pair(int a, int b)
///****************************************************************************************************************************************///
 
 
/// types Defines.
///***************************************************************************************************************************************///
typedef long double ld;
typedef vector<int>vi;
typedef vector<double>vd;
typedef vector<vd>vvd;
typedef vector<string>vs;
///***************************************************************************************************************************************///
 
 
///constants
///****************************************************************************************************************************************///
const int N  = (int)1e5+5;
const int M  = (int)1e6+6;
const int INF= (int)0x3f3f3f3f;
///****************************************************************************************************************************************///
 
 
///Global variables.
///****************************************************************************************************************************************///
int input  =0;
int optimal=0;
int cnt=0 ;
int arr[20009];
 
///****************************************************************************************************************************************///
 
 
int main()
{
 
cin >>input>>optimal;
	while(input<optimal){
        if(optimal&1)optimal++;
        else optimal/=2;cnt++;
	}
	cout<<cnt+input-optimal<<endl;
 
 
return 0;}

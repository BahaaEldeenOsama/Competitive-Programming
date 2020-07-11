#include <iterator>
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
///#include <bits/stdc++.h>
///#include <boost/multiprecision/cpp_int.hpp>
///using boost::multiprecision::cpp_int;
#include<iostream>
using namespace std;
 
int main()
{
ios_base ::sync_with_stdio(false) ;
int number_students=0,number_puzzles=0;
cin>> number_students >> number_puzzles ;
int*arr = new int[number_puzzles];
int Min=1000;
for(int i=0 ;i<number_puzzles;++i)
{
    cin>>arr[i] ;
}
sort(arr,arr+number_puzzles);
for(int i=number_students-1;i<number_puzzles;++i)
{
    Min = min(Min,arr[i]-arr[i-number_students+1]);
}
 
cout << Min <<endl;
 
return 0 ;}

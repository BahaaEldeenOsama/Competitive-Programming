#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : C - Friends of Friends
/// Method                : brute force
/// Online judge          : vjudge(Contest)
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///
#define ll long long




vector<int>friends;
set<int>friends_Of_friends;
int val,n,m;


int main()
{

cin>>n;
for(int i=0;i<n;++i)
{
    cin>>val>>m;
    friends.push_back(val);

    for(int j=0; j<m ;++j)
    {
        cin>>val;
        friends_Of_friends.insert(val);
    }
}


for(int i=0 ; i<friends.size();++i)
{
    /*
     for(set<int>::iterator it=friends_Of_friends.begin();it!=friends_Of_friends.end();++it)
     {
         if(*it==friends[i])
         {
             friends_Of_friends.erase(it);
         }
     }*/
     friends_Of_friends.erase(friends[i]);
}

cout << friends_Of_friends.size()<<endl;


 return 0;
}

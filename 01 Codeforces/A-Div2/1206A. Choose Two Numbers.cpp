#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : A - Choose Two Numbers
/// Method                : brute force
/// Online judge          :
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///

bool flag = true;
set<int>AB;
vector<int>A,B;
int val,n,m,idx_A=-1,idx_B=-1;


int main()
{

    cin>>n;
    for(int i=0 ; i<n;++i)
    {
        cin>>val;
        A.push_back(val);
        AB.insert(val);
    }

    cin>>m;
    for(int i=0 ; i<m;++i)
    {
        cin>>val;
        B.push_back(val);
        AB.insert(val);
    }

    //sort(A.begin(),A.end());
  //  sort(B.begin(),B.end());



    for(int i=0 ;i<n;++i)
    {
        for(int j=0 ; j<m ;++j)
        {
          set<int> :: iterator it=AB.begin() ;
          for(;it!=AB.end();++it)
            {
                if(A[i]+B[j] == *it )
                {
                    flag = false;
                }
            }

            if(flag)
            {
                cout<< A[i] << " " << B[j] <<endl;
                return 0;

            }

            flag =true ;

        }
    }





return 0;
}

#include <bits/stdc++.h>
using namespace std;


int arr[109][109],n,l=0,r=0;

int main()
{
   cin>>n;
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                l+=arr[i][j];
            }
            
            if((i + j) == (n - 1))
            {
                r+=arr[i][j];
            }
        }
    }
    
    
    
    cout << abs(l-r) <<endl;

}

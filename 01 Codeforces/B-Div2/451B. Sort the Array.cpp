#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int>A(n),B(n);
 
for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
     B=A;
    sort(B.begin(),B.end());
    int i=0, j=A.size()-1;
    if(A==B){ cout<<"yes\n1 1";}
 
    else
    {
 
        while( A[i] < A[i+1]) i++;
        while( A[j-1] < A[j]) j--;
 
 
    reverse(A.begin()+i , A.begin()+j+1);
 
        if(A == B) cout<<"yes\n"<<i+1<<" "<<j+1;
        else cout<<"no";
    }
 
    return 0;
}

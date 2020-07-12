#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
 
int subject=0;cin>>subject;
int per_Hours=0;cin>>per_Hours;
long long  arr[100000];
arr[subject];
long long output[100000];
output[subject];
long long result=0;
 
for(int i=0 ;i<subject;i++)
{
    cin>>arr[i];
}
 
sort(arr, arr+subject);
 
 
for(int i=0 ;i<subject;i++)
{
 
    if(per_Hours>1)
    {
 
        output[i] = arr[i] * per_Hours ;
        per_Hours--;
        ///cout << "The output : " <<output[i] << "   "<< "The per Hours : " << per_Hours <<endl;
    }
    else
    {
        output[i] = arr[i] ;
          ///cout << "The output : " <<output[i] << "   "<< "The per Hours : " << per_Hours <<endl;
    }
}
 
for(int i=0 ;i<subject;i++)
{
 
    result += output[i];
}
 
cout << result <<endl;
 
 
    return 0;
}

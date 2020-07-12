#include <iostream>
#include<algorithm>
using namespace std;
 
 
int n=0,k=0;
int minabs=~0U >> 1;
int ans=0;
 
int main()
{
/*
int i=0 ,n=0,k=0,temp[100000],a[100000],output=0;
 
cin >> n >> k ;
 
for(i=0;i<n;i++)
{
    cin>>a[i] ;
}
 
if (k!=0)
{
        for (;i<k;i++)
        {
            temp[i] =a[i] * (-1) ;
        }
        if (n>k)
        {
 
            for (i=(n-k)+1;i<n;i++)
            {
                temp[i]=a[i] ;
            }
            for (;i<n;i++)
            {
                output+=temp[i];
            }
            cout << output <<endl;
             return 0;
        }
        else
        {
            for (;i<n;i++)
            {
                output+=temp[i];
            }
            cout << output <<endl;
            return 0 ;
        }
 
}
else
{
        for(int i=0;i<n;i++)
        {
            output+=a[i];
        }
            cout << output <<endl;
             return 0 ;
}
*/
 
cin >> n >> k ;
for (int i=0 ;i<n;i++)
{
 
    int temp;cin>>temp;
    if (temp<0 &&k>0)
    {
        k--;
        ans+=temp *  (-1);
    }
    else
    {
        ans+=temp;
    }
    minabs=min(abs(temp),minabs);
}
 
if (k)
{
    if(k&1)
    {
        ans-=2*minabs;
    }
}
 
cout << ans <<endl;
 
 
 
return 0;
}

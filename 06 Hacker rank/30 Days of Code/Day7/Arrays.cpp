#include <bits/stdc++.h>
using namespace std;

/*
 *  Hard work beats talent when talent fails to work hard.
 *  Name   : Bahaa El-Deen osama.
 *  Date   : 28/7/2021
 *  Topic  : implementation.
 */
#define  FasterIO std::ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int arr[1009];
int n,item;

int main()
{
        FasterIO;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
    reverse(arr,arr+n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<< " ";
    }

return 0;}

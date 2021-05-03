/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Author : Bahaa El-Deen osama.
 *  Date   : 3/5/2021
 *  Topic  : 2D array.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<18;

int arr[N];
int n,d;

int main()
{

    cin>>n>>d;
    for(int i=0;i<n;++i) cin>>arr[(i+n-d)%n];
    for(int i=0;i<n;++i) cout <<arr[i]<< " ";



    return 0;
}

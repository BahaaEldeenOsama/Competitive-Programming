/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Author : Bahaa El-Deen osama.
 *  Date   : 3/5/2021
 *  Topic  : String.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<18;

vector<ll>res;
ll n1,n2,cnt=0;
string q[N],d[N];

bool areAnagram(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();

    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;

    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}


int main()
{

    cin>>n1;
    for(int i=0;i<n1;++i)cin>> d[i];
    cin>>n2;
    for(int i=0;i<n2;++i)cin>> q[i];

    for(int i=0 ; i<n2;++i)
    {
        for(int j=0;j<n1;++j)
        {
            if(areAnagram(q[i] , d[j]))++cnt;
        }
        res.push_back(cnt);
        cnt=0;
    }

    for(int i=0;i<res.size();++i)
    {
        cout << res[i] << "\n";
    }

    return 0;
}

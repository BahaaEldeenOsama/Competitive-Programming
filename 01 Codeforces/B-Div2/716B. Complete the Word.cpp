///#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <complex>
#include <cmath>
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
using namespace std;
 
 
 
int main()
{
/*
string input , temp ; cin >> input ;
 
int Size = input.length() ;
int frec = 0 ;
int question_mark = 0 ;
 
 
for(int i=0 ; i<=Size-26;i++)
{
    temp = input.substr(i , 26 ) ;
    question_mark  = 0 ;
 
    set<char>se ;
    bool vis[26] = {} ;
 
    for(int j=0 ; j<26 ;j++)
    {
 
        if(temp[j] == '?')
        {
            question_mark++ ;
        }
        else
        {
            se.insert(temp[j]),vis[temp[j]-'A'] = 1 ;
        }
    }
    if(se.size() + question_mark == 26 )
    {
        frec = 1 ;
        for(int j=i ,a=0 ;a<26 ;j++ , a++ )
        {
            if(input[j] == '?')
            {
                for(int j2=0 ; j2<26 ; j2++)
                {
                    if(!vis[j2])
                    {
                        input[j] = j2  + 'A';
                        vis[j2] = 1 ;
                         break ;
                    }
                }
            }
          break ;
        }
    }
}
 
 
if(frec)
{
    for(int i=0 ; i<Size ; i++)
    {
        if(input[i]== '?' )
        {
            input[i]='A' ;
        }
    }
    cout << input <<endl;
}
else
{
    cout << -1 <<endl;
}
return 0 ;
*/
string s,t;
    cin>>s;
    int n=s.size(),q,f=0;
    for(int i=0;i<=n-26;i++)
    {
        t=s.substr(i,26);
        q=0;
        set<char>se;
        bool vis[26]={};
        for(int j=0;j<26;j++)
        {
            if(t[j]=='?')
                q++;
            else
                se.insert(t[j]),vis[t[j]-'A']=1;
        }
        if(se.size()+q==26)
        {
            f=1;
            for(int j=i,a=0;a<26;j++,a++)
            {
                if(s[j]=='?')
                {
                    for(int jj=0;jj<26;jj++)
                        if(!vis[jj])
                        {
                            s[j]=jj+'A',vis[jj]=1;
                            break;
                        }
                }
            }
            break;
        }
    }
    if(f)
    {
       for(int i=0;i<n;i++)
            if(s[i]=='?')
                s[i]='A';
       cout<<s<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}

/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Author : Bahaa El-Deen osama.
 *  Date   : 5/5/2021
 *  Topic  : Stacks.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<18;


stack<ll>st;
ll val,n,qur;


int main()
{
          cin>>n;
          for(int i=0;i<n;++i)
          {
              cin>>qur;
              if(qur==1)
              {
                     cin>>val;
                     if(st.empty()){
                         st.emplace(val);
                     }
                     else{
                          st.emplace(max(val,st.top()));
                     }

              }
              else if(qur==2)
              {
                  if(!st.empty()) {
                      st.pop();
                  }
              }
              else
              {
                  cout << st.top() << endl;
              }
          }


return 0;}

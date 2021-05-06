/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Author : Bahaa El-Deen osama.
 *  Date   : 6/5/2021
 *  Topic  : Stacks.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<18;

bool check(char open ,char close)
{
    return (open=='('&&close==')')  ? true  : ( (open=='{'&& close=='}') ?  true :((open=='['&&close==']') ? true :  false) ) ;
}


bool IS_balance(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();++i) {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(') {
            st.emplace(str[i]);
        }
        else if (str[i] == ']' || str[i] == '}' || str[i] == ')')
        {
            if( (st.empty()) ||  !(check(st.top(),str[i]) )){
                return false;
            }else{
                st.pop();
            }
        }
        st.empty();
    }



    return true;
}

int n=0;
string str;

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(IS_balance(str))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }



return 0;}

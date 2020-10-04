#include<bits/stdc++.h>
using namespace std;

int t,cnt=0;
string str;

int main()
{
    std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    freopen("ocr.in","r",stdin);

    cin>>t;
    while(t--)
    {
        cin>>str;
         int ex = str.find("rn");

    if(ex>=0)
    {
        cout << "not sure\n";
    }
    else
    {
          cout << "sure\n";
    }


    }




return 0;
}

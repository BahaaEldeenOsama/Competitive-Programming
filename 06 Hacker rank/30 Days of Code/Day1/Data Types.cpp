 #include <bits/stdc++.h>
 using namespace std;

/*
 *  Hard work beats talent when talent fails to work hard.
 *  Name   : Bahaa El-Deen osama.
 *  Date   : 28/7/2021
 *  Topic  : implementation.
 */

#define Fx            fixed<<setprecision(1)
#define  FasterIO std::ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int main()
{
    FasterIO;
    int i = 4;
    double dd = 4.0;
    string ss = "HackerRank ";

    int a; cin>>a;
    double d;cin>>d;cin.ignore();
    string str; getline(cin,str) ;

    cout << a + i <<endl;
    cout << Fx <<d+dd<< endl;
    cout <<  ss+ str << endl;



    return 0;
}

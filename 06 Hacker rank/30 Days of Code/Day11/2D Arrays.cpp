 #include <bits/stdc++.h>
 using namespace std;

/*
 *  Hard work beats talent when talent fails to work hard.
 *  Name   : Bahaa El-Deen osama.
 *  Date   : 15/8/2021
 *  Topic  : Data Structure.
 */

#define Fx            fixed<<setprecision(1)

#define  FasterIO std::ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

int arr[6][6];
int  res ,mx=INT_MIN;


int main()
{
    FasterIO;
    for(int i=0;i<6;++i)
    {
        for(int j=0;j<6;++j)
        {
            cin>> arr[i][j];
        }
    }
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<4;++j)
        {
            res = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                          arr[i+1][j+1] +
                 arr[i+2][j] +  arr[i+2][j+1] +   arr[i+2][j+2] ;

         mx = max(mx,res);
        }
    }
    cout << mx << endl;
    return 0;
}

/*
 *  Motivation : Hard work beats talent when talent fails to work hard
 *  Author : Bahaa El-Deen osama.
 *  Date   : 2/5/2021
 *  Topic  : 2D array.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1<<18;



int main()
{
    int arr[6][6];
    int sum=0;
    int total = INT_MIN;
    for(int i=0;i<6;++i) {
        for (int j = 0; j < 6; ++j) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j) {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                   arr[i + 1][j + 1] +
                   arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if(total<sum) {
                total = sum;
            }
        }
    }

    cout << total << endl;

    return 0;
}

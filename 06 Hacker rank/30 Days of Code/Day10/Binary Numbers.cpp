#include <bits/stdc++.h>
 using namespace std;

/*
 *  Hard work beats talent when talent fails to work hard.
 *  Name   : Bahaa El-Deen osama.
 *  Date   : 8/8/2021
 *  Topic  : Data Structure.
 */

#define Fx            fixed<<setprecision(1)

#define  FasterIO std::ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);


int main()
{
    FasterIO;
    int n ;
    scanf("%d",&n);
    int count = 0;
    while (n) {
        n = (n & (n << 1));
        count++;
    }
    printf ("%d\n", count);



    return 0;
}

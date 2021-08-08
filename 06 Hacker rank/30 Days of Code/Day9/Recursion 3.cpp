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


int factorial(int n)
{
    if (n == 0)
        return 1;
    return  factorial(n-1)*n;
}



int main()
{
    FasterIO;
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));



    return 0;
}

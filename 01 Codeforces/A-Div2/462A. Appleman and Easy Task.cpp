    #pragma GCC optimize ("O3")
    #include<bits/stdc++.h>
    using namespace std;


    /// Info.
    ///****************************************************************************************************************************************///
    /// author                : BAHAA El_DEEN OSAMA .
    /// Problem name          : A. Appleman and Easy Task
    /// Method                : brute force
    /// Online judge          : cf
    /// Date                  : 22/7/2020
    ///****************************************************************************************************************************************///

     vector<string>vec,vec1,vec2;
     int n=0,cnt=0;
     string str,str1,str2 ;
     bool flag = true ;
     char arr[105][105];



     int main()
     {

            cin>>n;
            for(int i=0 ;i<n;++i)
            {
                cin>> str;
                str1+=str;
            }

           str2=str1;

           reverse(str2.begin(),str2.end());

           if(str2==str1)
           {
               cout << "YES\n";
               return 0;
           }
           cout << "NO\n";

        return 0 ;
    }

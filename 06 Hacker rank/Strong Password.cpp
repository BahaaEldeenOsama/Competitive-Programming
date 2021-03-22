#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong
    string s1= "!@#$%^&*()-+";
    string s2= "aqwertyuioplkjhgfdsazxcvbnm";
    string s3= "QWERTYUIOPASDFGHJKLMNBVCXZ";
    string s4= "0123456789";
    int cnt=0;
    if(n<=6){
        return 6-n;
    }
    else {
           int dg=0,lc=0,uc=0,sp=0;
           for(int i=0;i<s.length();++i)
           {
              if( isdigit(s[i]) ){++dg;}
              else if( isupper(s[i]) ){++uc;}
              else if( islower(s[i]) ){++lc;}
              else{++sp;}
           }
           if(dg>1){dg=1;}
           if(uc>1){uc=1;}
           if(lc>1){lc=1;}
           if(sp>1){sp=1;}
           
          
           
        return 4-(dg+uc+lc+sp);
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

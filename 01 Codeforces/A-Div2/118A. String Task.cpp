#include<iostream>
#include<cstring>
#include<string>
using namespace std ;
 
int main()
{
 
string input,out;
cin>>input ;
 
 
for(int i=0; i<input.length();i++ )
{
   if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='y'||input[i]=='A'||input[i]=='E'||input[i]=='O'||input[i]=='I'||input[i]=='U'||input[i]=='Y')
    {
     continue ;
    }
    else
    {
        out+="." ;
        out+=tolower(input[i]);
 
    }
}
cout << out ;
 
}

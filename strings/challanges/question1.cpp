#include<iostream>
#include<string>
usinf namespace std;
int main(){

    //Convert a string into upper case or uper case
    //we use ASCII values as the values of A differ from a from 32 units.
    string str= "skdmcdsmdsvm";
    for(int i = 0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;

        }
        cout<<str;
    }
    //To convert to lower case;
    string str2 = "DSFSDASDASDASDSD";
    for(int i = 0;i<str2.size();i++){
        if(str2[i]>='A'&&str[i]<='Z'){
            str2[i]+=32;

        }
        cout<<str;
        cout<<str2;
    }

    //inbuild function 
     string s = "klsnfsdnff";
     transform(s.begin(),s.end(),s.begin(),::toupper);
     cout<<s<<endl;
     string s1 = "klsnfsdnff";
     transform(s.begin(),s.end(),s.begin(),::tolower);




}
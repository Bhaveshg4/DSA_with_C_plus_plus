#include<iostream>
#include<string>
using namespace std;
int main(){
    //Print the most occuring caracter in a string
     string s = "eeerrewensjnfsdrrrrrrrrrr"
     int frez[26];
     for(int i=0;i<26;i++){
        frez[i];
     }
     for(int i=0;i<26;i++){
        frez[i]=0;
     }
     for (int i = 0; i < s.size; i++)
     {
        frez[s[i]-'a']++;
     }
     char ans='a';
     int maxf=0
     for(int i=0;i<26;i++){
        if(frez[i]>maxf){
            maxf=frez[i];
            ans=i+'a';
        }

     }
     cout<<maxf<<" "<<endl;
     
    return 0;
}
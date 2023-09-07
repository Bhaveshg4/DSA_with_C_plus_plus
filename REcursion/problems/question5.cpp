#include<iostream>
using namespace std;
int changepi(string s){
    
    if(s.length==0){
        return 0;
    }
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2))
    }else{cout<<s[0];
    changepi(s.substr(1));}
}
int main(){
    string pichange = "pidjfbfdpidhpiapiapi"
    return 0;
}
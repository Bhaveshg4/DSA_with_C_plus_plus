#include<iostream>
#include<string>
using namespace std;
int main(){
    //form the biggest number from the numeric string
    //we use sorting
    string s = "342364363";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    
}
#include<iostream>
//reverse a string using recursion
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return 0;
    }
    string rest = s.substr(1);
    reverse(rest);
    cout<<s[0];

}
int main(){
    reverse("Bhavesh");


    return 0;
}
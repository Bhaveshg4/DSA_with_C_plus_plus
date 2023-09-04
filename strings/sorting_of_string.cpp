#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s1 = "euheuebfe";
    sort(s1.begin()/*give starting iterator*/,s1.end()/*khatam hine ke bad wala iterator*/);
    cout<<s1<<endl;
    
    return 0;
}
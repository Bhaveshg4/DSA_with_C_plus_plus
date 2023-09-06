#include<iostream>
using namespace std;
//When a function calls itself to solve a problem is called recursion
int SUm(int n){
    if(n=0){return 0;}
    int prevSum = SUm(n-1);
    return n+prevSum;
}
int main(){
   int n;
   cin>>n;
   cout<<SUm(n)<<endl;
    return 0;
}
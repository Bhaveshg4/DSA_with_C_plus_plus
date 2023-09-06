#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;

    }
    return a;
}
int main(){
   // if the result is c ,of substraction of
   //a and b, then a and c have same gcd as a and b
   cout<<gcd(24,12)<<endl;

}
#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i = 2;i<=sqrt(2);i++){
        if(num%i ==0){
            return false;
        }

    }
    return true;

}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i =a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}
#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int previousPower = power(n,p-1);
    return n*previousPower;

}
int main(){
    int n,p;
    cin>>n>>p;
    
    return 0;
}
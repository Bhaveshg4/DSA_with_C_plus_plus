#include<iostream>
using namespace std;
void fibo(int n){
    int t1 = 0;
    int t2 = 1;
    int Nextterm;
    for(int i =1;i<=n;i++){
        cout<<t1<<endl;
        Nextterm=t1+t2;
        t1=t2;
        t2= Nextterm;

    }
    return;

}
int main(){
    int n;
    cin>>n;
    fibo(n);
}
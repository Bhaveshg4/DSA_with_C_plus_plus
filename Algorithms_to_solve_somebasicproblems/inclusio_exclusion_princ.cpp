#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;

}
int main(){
    //when we have to solve a programing question based on the question "find the number of ways to solve this kind of problem"
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(12,3,4);
    

    
}
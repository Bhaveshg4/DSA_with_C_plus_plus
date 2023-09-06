#include<iostream>
#include<string>
using namespace std;
bool ispowerof2(int n){
    return (n &&n&n-1);
}
int main(){
    //write a program to check if a given number is power of 2
    cout<<ispowerof2(14)<<endl;

}
#include<iostream>
using namespace std;
int getBit(int n,int pos){

    return (n & (1<<pos))!=0;
}
//unset bit: we have to get 0 to the required bit we have to do | or
//set bit: we have to get 1 to the required bit
int setBit(int n,int pos){
    return (n|(1<<pos))
   

}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(6,3)<<endl;

}
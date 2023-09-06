#include<iostream>
using namespace std;
int unique(int arr[], int n){
    for(int i=0;i<n;i++){
    int xorsum=xorsum^arr[i];}
    return xorsum;
}
int main(){
    //write a program tofind a unique number in a array where all numbers except one are present twice
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;
    return 0;
}
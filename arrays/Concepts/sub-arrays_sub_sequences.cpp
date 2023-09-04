#include<iostream>
using namespace std;
int main(){
    //Subarrays and Subsequences
    //nummber of sub-arrays in an array = n*(n+1)/2
    //A subarray is a contiguous part of array. An array that is inside another array.
    int n;
    cin>>num;
    int arr[num];
    cout<<"Number of sub-arrays possible is"<<endl;
    int sub_arr= n*(n+1)/2;
    cout<<sub_arr<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    //Subarrays and Subsequences
    //nummber of sub-arrays in an array = n*(n+1)/2
    //A subarray is a contiguous part of array. An array that is inside another array.
    //Subsequences: A subsequences is a sequence that can be derived an array by selecting zero or
    //more elements without changing the order of the remaining elements.
    //Number od subsequences: 2^n
    //Every subarray is a subsequence but every subsequence is not a subarray.

    int n;
    cin>>num;
    int arr[num];
    cout<<"Number of sub-arrays possible is"<<endl;
    int sub_arr= n*(n+1)/2;
    //int sub_seq_in_arr = 2^n;
    cout<<sub_arr<<endl;

    return 0;
}
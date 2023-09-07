#include<iostream>
//check wether a array is sored or not
using namespace std;
bool sorted(inr arr[],int n){
    if (n==1)
    {   return true; }
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&& restArray);}
int main(){
    int arr[]={1,35,345,3534,3445};
    cout<<sorted(arr,5)<<endl;
    return 0;


}
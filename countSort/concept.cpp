#include<iostream>
using namespace std;
//time complexity is better than other algorithm
/*we will do two things here
1.Find the count of every distinct element in the arr
2.Calculate the position of each element in sorted arr
*/
void countSort(int arr[],int n){
    int k =arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++){
        cout[arr[i]]++;
    }
    for (int i = 0; i <=k; i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for (int i = n-1; i >=0; i++)
    {
        output[--count[arr[i]]]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=output[i];
    }
    
    
    
}
int main(){
    int arr[]={1,4,2,3,4,2,6,7};
    countSort(arr,9);
    for (int i = 0; i <8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0; 
}
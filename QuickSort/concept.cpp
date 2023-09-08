#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp - arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int par(int arr[],int i,int r){
    int pivot=arr[i];
    int i=l-1;
    for (int j = l; j<r; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);

        }
    }
  //  time complexity: O(nlogn) best case
  //  time complexity: O(N^2) worst case
    
}
void quickSort(int a[],int l,int r){
    if (l<r)
    {
        int pi = par(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    
    }
    //Quick Sort: divide and conquere algorithm
}
int main(){
    int a[5]={2,4,5,3,2};
    quickSort(a[],0,4);
    for (int i = 0; i <5; i++)
    {
        cout<<endl<<" ";
    }cout<<endl;
    

    


    return 0;}
 
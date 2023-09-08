#include<iostream>
using namespace std;
long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=1;
    while (i<n1 && j<n2)
    {
        if (a[i]<=b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }else{
            arr[k]==b[j];
            inv +=n1-i;
            k++;j++;
        } 
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
        return inv;
    }
}
long long ci_withmerge(arr[],int l,int r){
    long long inv=0;
    if (r>l)
    {
     int mid=(l+r)/2
     inv +=mergesort(arr,l,min);
     inv +=mergesort(arr,mid+1,r);
     inv +=merge(arr,l,mid,r);
    }
    return 0;
}
int main(){
    //Count inversion using merge sort
     /*
    Problem statement:
    Count inversion in the given array.
    two elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j
    */
   //use merge sort to solve it
   int number;
   cin>>number;

   int arr[number];
   for (int i = 0; i < number; i++)
   {
    cin>>arr[i];
   }
   cout<<ci_withmerge(arr,0,n-1);
    return 0;
}
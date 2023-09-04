#include<iostream>
using namespace std;
int main(){
    //insertion sort
    int inp_size;
    cin>>inp_size;
    int arr[inp_size];
    for (int  i = 0; i < inp_size; i++)
    {  cin>>arr[i];
    }
    for(int i=1;i<inp_size;i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current&&j>=0)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=current;
        
    }
    for (int i = 0; i<inp_size; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    
    return 0;

} 

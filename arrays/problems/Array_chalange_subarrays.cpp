#include<iostream>
using namespace std;
int main(){
    //CALCULATE THE SUM OF ALL THE SUBARRAYS
    int int_arr;
    cin>int_arr;
    int arr[int_arr];
    for (int i = 0; i < int_arr; i++)

    {
        cin>>arr[i];
        
    }
    int current_sum=0
    for (int  i = 0; i < int_arr; i++)
    {
        current_sum=0;
        for (int j = i; j<n; j++)

        {
            current_sum+=arr[j]
            cout<<current_sum<<endl;
        }
        
    }
    
      

   
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    ///take an input from the user of size n and print the max and min element from the array.
    cout<<"Enter the amount of elements"<<endl;
    int give_number;
    cin>>give_number;
    int num_arr[give_number];
    for (int  i = 1; i <=give_number; i++)
    {
        cout<<"Please enter your numbers"<<endl;
        cin>>num_arr[i];

    }
    int min;
    int max;
    cin>>min>>max;
    for(int i=1;i<=give_number;i++){
        if (num_arr[give_number]>max)
        {
            max=num_arr[i];
        }
        if (num_arr[give_number]<max)
        {
            min=num_arr[i];
        }
        
    }
    

}
#include<iostream>
using namespace std;
int binarySearch(int arr[],int give_number,int key){
    int starting_point =0;
    int ending_point = give_number;
    while (starting_point<=give_number)
    {
        int mid_value = (starting_point+give_number)/2;
        if(arr[mid_value]==key){
            return mid_value;
        }else if (arr[mid_value]>key)
        {
            ending_point=mid_value-1;
        }
        else{
            starting_point=mid_value+1;
        }
        return -1;
    }
    


}
int main(){
    cout<<"Please input the size of number";
    int give_number;
    cin>>give_number;
    int arr[give_number];
    for(int i=1;i<=give_number;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int binaryOut = binarySearch(arr,give_number,key);
    cout<<binaryOut<<endl;
         
}

#include<iostream>
using namespace std;
//Bubble sorting
int main(){
    int num;
    cout<<"Please give the size of array"<<endl;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter the elements in the array"<<endl;
        cin>>arr[i];

    }
    int counter=1;
    while (counter<num){
        for (int  i = 0; i < num-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
                
             }
        }
        counter++;
    }
    for (int  i = 0; i < num; i++)
    {
        cout<<arr[i]<<"     ";
    }
    
    
    
    return 0;
}
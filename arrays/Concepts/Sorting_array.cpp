#include<iostream>
using namespace std;
int main(){
    int give_number;
    cin>>give_number;
    int num_array[give_number];
    for(int i =1;i<=give_number;i++){
        cin>>num_array[i];

    }
    for(int i=0;i<give_number-1;i++){
        for(int j=i+1;j<give_number;j++){
            if(num_array[j]<num_array[i]){
                int temp = num_array[j];
                num_array[j]=num_array[i];
                num_array[i]=temp;


            }
        }
    }
    for(int i=0;i<give_number;i++){
        cout<<num_array[i]<<" ";

    }cout<<endl;
    return 0;

}
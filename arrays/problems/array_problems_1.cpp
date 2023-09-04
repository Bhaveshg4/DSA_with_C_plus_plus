#include<iostream>
using namespace std;
int main(){
    //count the maximum number in each block of array as it proceds
    //example:   arr[6]= 4,32,7,1,55,1;
    // required answer=  4 32 32 32 55 55  
    int arr[4]={2,1,6,3};
    int mx=-199999999999999;

    for (int i = 0; i < 4; i++){
       mx = max(mx,arr[i]);
       cout<<mx<<endl;
        
    }  
    cout<<mx;
}
//char array question 1
#include<iostream>
using namespace std;
int main(){
    //check palindrome
    // example: anna spelt backword or forward its the same meaning
    int n;
    cin>>n;
    char par_arr[n];
    cin>>par_arr;
    bool check=1;
    for(int i=0;i<n;i++){ 
        if(arr[i]!=arr[n-1-i]){
            check = 0;
            break;
            
        }
    }
    if(check==true){
        cout<<"Word is a palindrome"<<endl;
    }
    else{
        cout<<"Word is not a palindrome"<<endl;
    }  
    
    return 0;
}
#include<iostream>
using namespace std;

int linerarSearch(int arr[],int n, int key){
    for(int i=1;i<=n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    //linear search
    int n;
    cin>>n;
    int arr[n];
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int output = linerarSearch(arr,n,key);
    return 0;
    
}
#include<iostream>
using namespace std;
int main(){
    //largest word in a sentence
    int n;
    cin>>n;
    //cin.ignore clears the buffer which we be produced
    cin.ignore;
    char arr[n+1];
    //here we use getline function
    //this function inputs the whole sentence
    cin.geline(arr,n);
    cin.ignore(),
    int i=0;
    int currentlength=0;
    int maxlenngth=0;
    while(1){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(currentLength>maxlength){
                maxlength=currentLength;
            }
            currentlength=0;
        }
        else
        currentlength++;
        if(arr[i]=='\0'){
            break;
        }
    }
    
    return 0;
}
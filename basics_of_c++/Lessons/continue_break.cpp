#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pocketmoney;
    cin>>pocketmoney;
    for(int date; date<31;date ++){
        if (date/2==0)
        {    continue; }
        if (pocketmoney==0)
        {    break; }   
        cout<<"Go out today"<<endl;
        pocketmoney=pocketmoney-300;
    }


    //print number 1 to 100 and break the operation when a int in divisible by 3
    for (int  i = 0; i <=100; i++)
    {
        cout<<i<<endl;
        if (i/3==0)
        {
            continue;
        }
        
    }
    //prime or not
    for(int i =2;i<30;i++){
        if(n/i==0){
            cout<<"Not prime"<<endl;
            break;
        }
        if(i==n){
            cout<<"Prime"<<endl; 
        }
    }
    
    

}
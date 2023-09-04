#include<iostream>
using namespace std;
int main(){
    //for loops
    int n;
    cin>>n;
    int sum =0;
    for(int counter = 1; counter<= n;counter++){
        sum = sum+counter;
    }
    cout<<"The Sum is:"<<sum<<endl;
    //while loop
    int take_num;
    cin>> take_num;
    while (take_num<0)
    {
        cout<<"The number is negetive";
        
    }
    //do while loop
    int number;
    cin>> number;
    do
    {
        
        cout<<number<<endl;
    } while (
        number>2
    );
    
    







    return 1;
}
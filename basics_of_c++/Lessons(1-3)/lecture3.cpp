#include<iostream>
using namespace std;
int main(){
    //if_else statement
    int friend1;
    cin>>friend1;
    int friend2;
    cin>> friend2;
    int sum = friend1+friend2;
    if (friend1>friend2)
    {
        cout<<"Friend1 is more welcoming";
    }
    else{
        cout<<"Friend2 is more welcoming";
    }

    if(
        friend1+friend2<5000
    ){
        cout<<"Go out with Friend1/friend2";
    }
    else if (sum<friend1)
    {
        cout<<"Go with friend2";
    }
    else{
        cout<<"Dont go anywhere";
    }
    
    if (friend1>1000)
    {
    if (friend1>10000)
    {
        cout<<"Road trip";
    }
    
    }
    
}
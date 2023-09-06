#include <iostream>
using namespace std;
int main(){
    int greatest;
    int a,b,c;
    cin>>a>>b>>c;   
    if (a>b)
    {
     if (a>c)
     {
        cout<<a<<endl;
     }
    }
    else{
        if (b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
        
    }
    int pass_number;
    cin>>pass_number;
    if (pass_number/2==0)
    {
        cout<<"Even Number";
    }
    else{
        cout<<"Odd number";
    }
    
    

    
    
    
    return 0;

}
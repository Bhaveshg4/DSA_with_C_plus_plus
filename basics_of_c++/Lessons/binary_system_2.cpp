#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int num;
    cin>>num;
    bool flag =0;
    for (int  i = 2; i < sqrt(num); i++)
    {
        if (num%i==0)
        {
            cout<<"Not prime"<<endl;
            flag = 1;
            break;
        }
        
    }
    if (flag==1)
    {
        cout<<"Prime number";
    }
    
    


}
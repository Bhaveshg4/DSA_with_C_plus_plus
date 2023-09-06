#include<iostream>
#include<cmath>
//153 = 1+125+27
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln = n;
    while (n>0)
    {
        int lastdigit = n%10;
        //power function: pow
        sum+= pow(lastdigit,3);
        n = n/10;



    }
    if (sum==originaln)
    {
        cout<<"This is a armstrong number";
    }else{
        cout<<"Its not a armstrong number";
    }
    
    
    return 0;


}
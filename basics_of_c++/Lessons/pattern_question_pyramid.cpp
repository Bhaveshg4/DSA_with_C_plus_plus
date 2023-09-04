#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = n; i>=1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"x";
        }
        cout<<endl;
        
    }

    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
         if (j<=n-1)
         {
            cout<<" ";
         }
         else{
            cout<<"x";
         }
         
        }
        
    }

    int num;
    cin>>num;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<i<<" ";
        }cout<<endl;
        
    }
    
    
    return 0;
    
    
}
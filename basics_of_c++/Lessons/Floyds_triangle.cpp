#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int count;
    cin>>num;
    for (int  i = 1; i <= num; i++)

    {
        for (int j = 0; i <=i; j++)
        {
            cout<<count<<" ";
            count++ ;
            
        }
        
    }
    //butterfly pattern
    int num1 = 4;
    int num2 = 4;
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; i <=num2; i++)
        {
           cout<<"n";

            
        }
        int space = 2*num1-2*num1;
        for (int  j = 1; i < space; j++)
        {
            cout<<" ";
            
        }
        for (int j = 1; i <=num2; i++)
        {
           cout<<"n";

            
        }
        cout<<endl;
        
        
    }
    
    
    return 0;
}


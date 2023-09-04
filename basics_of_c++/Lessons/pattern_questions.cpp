#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    //rectangle
    for(int i=1;i<=row;i++){
        for (int j = 1; i <=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    //hollow rectangle
    int row1,col2;
    cin>>row1>>col2;
    for (int i = 1; i < row1; i++)
    {
        for (int j = 0; i < col2; j++)
        {
            if (i==1 || i == row1)
            {
                cout<<"x";
            }
            else if (j==1 || j == col2)
            {
               cout<<"x";
            }
            else
            {
                cout<<"x";
            }
            
            
            
        }
        cout<<endl;
        

        
    }
    
    

}
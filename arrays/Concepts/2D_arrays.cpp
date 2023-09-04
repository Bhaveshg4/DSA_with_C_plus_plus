//2D ARRAYS
//2D arrays
#include <iostream>
using namespace std;
bool flag = false;
int main() {
    // 2D Arrays
    
    int n,m;
    cin>>n>>m;
   int arr[n][m];
   for(int i = 0;i<=n;i++){
       for(int j=0;j<m;j++){
           cin>>arr[i][j];
           
       }
   }
   cout<<"Matrix is"<<endl;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
           
       }
       cout<<   "\n";
   }
   int x;
   cin>>x;
   for(int i = 0;i<=n;i++){
       for(int j=0;j<m;j++){
           if(arr[i][j]==x){
               cout<<i<<" "<<j <<endl;
               flag = true;
           };
            
       }
   }
   if(flag){
       
       cout<<"Element found"<<endl;
   }else{
       cout<<"Element is not found"<<endl;
   }
       
   }
   
   
    
}